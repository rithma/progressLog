# progressLog
a progress log of my education

December 22, 2015
decided, after much himming&hawing, to properly learn C, AVR, MAX, microcontroller programming, in the name of Jon Ross, music,  
and for all the years I TALKED about wanting to learn this, but smoking heroin & speed instead.  I was fresh out of rehab, 
my brain was going to function soon, it was time to walk the walk. 

Jan 22, 2016
Started the eDx course "embedded systems: shape the world", led by Jonathon Valvano & prof. Yeraballi. at UT Austin. (ARM based course)
(around the same time)  began Elliot Williams book  Make: AVR programming.

2/01/2016 : Started an online course "the C++ institute", after realizing I dont know fuck all about c programming.  this is 
  an awesome course.   Very well explained. 

4/18/2016 : Shit or get of the pot - started "Delicious Max Tutorials". I need to stop being afraid of the things that intimidate me. 
  Max is easy as shit to get into.  I looked into this software 12 years ago and shyed away.  Not anymore.  
  The "karplus strong' Max/MSP tutorial got my machine properly making noise, 
  and when I went home, I created an LFO output with Motu ultralight with a proper 10v PtP signal for controlling my eurorack. 

4/26/2016 : Completed up to Lesson 6: Bitwise operators in C of Embedded Systems Programming (Quantam Leaps youtube)
  this guy is good. Explaining deep Assembly functions in IAR, very detailed descript. 
  
4/28/2016 : Lesson 7: Arrays & pointer arithmetic.

QUESTIONS STILL:
-research the difference between GPIO_PORTF_AHB_DATA_BITS_R and GPIO_PORTF_DATA_R
GPIOHBCTL - GPIO high performance bus control
to switch to AHB, the faster, better bus,..

SYSCTL_GPIOHBCTL_R |= (1U << 5)
-setting bit 5 in this register switches GPIOF into AHB mode. 
then all registers in program must be changed to reflect.  
GPIO_PORTF_DEN_R
now becomes 
GPIO_PORTF_AHB_DEN_R

- honestly I need to rewatch lesson 7- using pointer arrays to write to the LED is a bit confusing. 
and why did he create 2 counters?     counter[1],[2] WTF

4/28/2016 : Lesson 8- Functions and the Stack.....
- if nothing else,   learn about the stack!

6/5/2016 : 
Just an update.
-Sucesses:  operation of ADC well & good on TM4C and STM, and AVR boards. Operation of Nokia 5110 display graphics & text with TM4 MCU good. Learning is daily, slow, rewarding & frustrating. 
MBED platform offers the most bang for my buck.   Libraries easily tooled into the nucleo board & tested, all with their free online IDE.
Still some trouble compiling more function into my chips with Keil,  it seems as though whenever I try to mix flavors of what I've learned, for instance a functioning ADC initialization from Ying Bai's IEEE book, and a UART init from fucking Valvano's class, 
a bunch of shit hits the fan, the wind gets knocked out of my sails, and I go home all mopey.  Oh well, day by day the tiny little breakthroughs keep me moving along. 

So Far:
-Arm Coretex M4 Cookbook - 29%
-Fucking Valvano's class - skipping around, but SUCESSFULLY debugged lab 4, which had me completely baffled and clueless a couple months
ago,,,,,, who says old dudes cant learn new shit???  Felt real good.
-Ying Bai's IEEE book - chap 4 or 5 ADC stuff... really explanitory but hard to focus unless I got large uninterrupted time.
-Miro Samek Youtube course - Lesson 14 startup code. Love this guy. Love Him. 

6/22/2016 -  The learning continues.  I am a good way into "Embedded Systems" by Elicia White, 
    Starting a book called "Understanding and using pointers" ...  really good clusterfuck.
-found a new Professor on Youtube,  called 
Richard Buckland.       Amazing things from that guy. 
"Everything you need to know about pointers"  







Vids Watched:

Quantam leaps:
lessons 1 thru 17


Richard Buckland  
Lecture 10:  Functions
(8.1 & 8.2 high level computing)



EEVBlog
EEV 54 when i was young













