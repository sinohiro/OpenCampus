#include "mbed.h"
#include "beep.h"
#include "string.h"
#include "stdlib.h"

/*------------------------------------*/
/*             PinSetting             */
/*------------------------------------*/
Beep buzzer(dp2);
Serial pc(dp16, dp15);
DigitalOut red(LED1);

/*------------------------------------*/
/*                Queue               */
/*------------------------------------*/
// http://edu.net.c.dendai.ac.jp/ad/1/2005/5/index.xml#2
typedef struct {
	unsigned short freq;
	float second;
} note;

typedef struct qb {
	note *value;
	struct qb *next;
} queue;

queue *e = NULL;
queue *d = NULL;

bool is_queue_empty();
bool enqueue(note *value);
note *dequeue();


/*------------------------------------*/
/*               Serial               */
/*------------------------------------*/
void enqueueNote();


/*------------------------------------*/
/*               Playing              */
/*------------------------------------*/
int main() {
	pc.attach(&enqueueNote);
	
	while(1) {
		note *value = dequeue();
		if (value == NULL) continue;
		
		if (value->freq == 0) {
			wait(value->second);
		} else {
			red = 1;
			buzzer.beep(value->freq, value->second);
			red = 0;
		}
		
		free(value);
	}
}



/**************************************/
/*                Queue               */
/**************************************/
bool is_queue_empty() {
	return (d == NULL);
}

bool enqueue(note *value) {
	queue *next = (queue *)malloc(sizeof(queue));
	if (next == NULL) return false;
	
	next->value = value;
	next->next = NULL;
	
	if (d == NULL) {
		d = next;
	} else {
		e->next = next;
	}
	e = next;
	
	return true;
}

note *dequeue() {
	if (is_queue_empty()) return NULL;
	
	note *value = d->value;
	queue *next = d->next;
	free(d);
	d = next;
	return value;
}


/**************************************/
/*               Serial               */
/**************************************/
void enqueueNote() {
	#define	BUFLEN	16
	
	note *value = (note *)malloc(sizeof(note));
	if (value == NULL) return;
	
	char buf[BUFLEN];
	pc.gets(buf, BUFLEN);
	
	char *p = strchr(buf, ',');
	if (p == NULL) return;
	
	*p = '\0';
	value->freq = atoi(buf);
	value->second = atof(p + 1);
}
