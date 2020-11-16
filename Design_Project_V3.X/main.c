
#include "mcc_generated_files/mcc.h"
// global variable arrays
uint8_t matrix[]={
  //a  b  c  d  e  f  g
    0, 0, 0, 0, 0, 0, 1, //0
    1, 0, 0, 1, 1, 1, 1,
    0, 0, 1, 0, 0, 1, 0, //2
    0, 0, 0, 0, 1, 1, 0, 
    1, 0, 0, 1, 1, 0, 0, //4
    0, 1, 0, 0, 1, 0, 0, 
    0, 1, 0, 0, 0, 0, 0, //6
    0, 0, 0, 1, 1, 1, 1, 
    0, 0, 0, 0, 0, 0, 0, //8
    0, 0, 0, 0, 1, 0, 0, 
};
uint8_t Lock[]={
   0, 0, 0, 1, 1, 1, 0,  // L
   0, 0, 1, 1, 1, 0, 1,  //o
   0, 0, 0, 1, 1, 0, 1,  //c 
   1, 0, 1, 0, 1, 1, 1,  //K 
};
uint8_t Open[]={
   0, 0, 1, 1, 1, 0, 1, //o
   1, 1, 0, 0, 1, 1, 1, //p
   1, 0, 0, 1, 1, 1, 1, //e 
   0, 0, 1, 0, 1, 0, 1, //n
};
uint8_t Deny[]={
   0, 1, 1, 1, 1, 0, 1,  //d
   1, 0, 0, 1, 1, 1, 1, //e
   0, 0, 1, 0, 1, 0, 1, //n
   0, 1, 1, 1, 0, 1, 1, //y
};
uint8_t New[]={
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 1, 0, 1, 0, 1, //n
   1, 0, 0, 1, 1, 1, 1, //e
   0, 1, 1, 1, 1, 1, 1, //w
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 1, 1, 0, 1, //c
   0, 0, 1, 1, 1, 0, 1, //o
   1, 1, 0, 1, 0, 1, 0, //m
   0, 0, 1, 1, 1, 1, 1, //b
   0, 0, 1, 1, 1, 0, 1, //o
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
};
uint8_t Set[] ={
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 
   0, 0, 0, 1, 1, 0, 1, //c
   0, 0, 1, 1, 1, 0, 1, //o
   1, 1, 0, 1, 0, 1, 0, //m
   0, 0, 1, 1, 1, 1, 1, //b
   0, 0, 1, 1, 1, 0, 1, //o
   0, 0, 0, 0, 0, 0, 0,
   1, 0, 1, 1, 0, 1, 1, //s
   1, 0, 0, 1, 1, 1, 1, //e
   0, 0, 0, 1, 1, 1, 1, //t
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
};
// function prototypes
void OpenShow(uint8_t value);
void LockShow(uint8_t value);
void DenyShow(uint8_t value);
void NewShow(uint8_t value);
void digitShow(uint8_t value);
void SetShow(uint8_t value);
void DisplayOpen();
void DisplayLock();
void DisplayDeny();
void RunningADCC(uint8_t digit,uint8_t tens, int *combo1,int *combo2,int *combo3,int *combo4,int count,int value,bool running);
void RunningNew(uint8_t digit,uint8_t tens,int *num1,int *num2,int *num3,int *num4,int *value,bool working);
void Scrollnew();
void ScrollSet();
void Reset();
void main(void){
    // initialize the device
    SYSTEM_Initialize();
    int combo1;
    int combo2;
    int combo3;
    int combo4;
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;
    // counter for switch statement in main
    int count=0;
    // used to store ADCC Values
    uint8_t digit;
    uint8_t tens;
    int value;
    // used for running while loop
	bool running = true;
    bool working = true;
	// turns off all displays before starting while loop.
    A1_SetHigh();
    A2_SetHigh();
    A3_SetHigh();
    A4_SetLow();
    SEG_DP_SetLow();
    RunningADCC(digit,tens,&combo1,&combo2,&combo3,&combo4,count,value,running);
    // main while loop
    while(1){
		digit=(ADCC_GetSingleConversion(POT)>>4)%10;
		tens =(ADCC_GetSingleConversion(POT)>>4)/10;
		value =(ADCC_GetSingleConversion(POT))/16;
		////// breaks loop and checks if combo is right /////////////////
		if(combo1 == num1 && combo2 == num2 && combo3 == num3 && combo4 == num4){
            DisplayOpen();
            if(value == 63){
                if(BTN_GetValue() == 0){
                    __delay_ms(200);
                    Scrollnew();
                    RunningNew(digit,tens,&num1,&num2,&num3,&num4,value,working);
                    count = 0;
                    Reset();
                    RunningADCC(digit,tens,&combo1,&combo2,&combo3,&combo4,count,value,running);
                }  
            }else{
                if(BTN_GetValue() == 0){
                    DisplayLock();
                    count = 0;
                    Reset();
                    RunningADCC(digit,tens,&combo1,&combo2,&combo3,&combo4,count,value,running);
                    }
            }
		}else{
            DisplayDeny();
			if(digit == 0 && tens == 0 && value ==0){
				count = 0;
				Reset();
                RunningADCC(digit,tens,&combo1,&combo2,&combo3,&combo4,count,value,running);
			}
		}
    }
}
// reset function
void Reset(){
    A1_SetHigh();
    A2_SetHigh();
    A3_SetHigh();
    A4_SetHigh();
    LED0_SetLow();
    LED1_SetLow();
    LED2_SetLow();
    LED3_SetLow();
}
// function for assigning array values to
// segment LEDs
void OpenShow(uint8_t value){
    uint8_t *p=&Open[value*7];
    SEG_A_LAT = *p++;
    SEG_B_LAT = *p++;
    SEG_C_LAT = *p++;
    SEG_D_LAT = *p++;
    SEG_E_LAT = *p++;
    SEG_F_LAT = *p++;
    SEG_G_LAT = *p++;
}
void LockShow(uint8_t value){
    uint8_t *p=&Lock[value*7];
    SEG_A_LAT = *p++;
    SEG_B_LAT = *p++;
    SEG_C_LAT = *p++;
    SEG_D_LAT = *p++;
    SEG_E_LAT = *p++;
    SEG_F_LAT = *p++;
    SEG_G_LAT = *p++;
}
void DenyShow(uint8_t value){
    uint8_t *p=&Deny[value*7];
    SEG_A_LAT = *p++;
    SEG_B_LAT = *p++;
    SEG_C_LAT = *p++;
    SEG_D_LAT = *p++;
    SEG_E_LAT = *p++;
    SEG_F_LAT = *p++;
    SEG_G_LAT = *p++;
}
void NewShow(uint8_t value){
    uint8_t *p=&New[value*7];
    SEG_A_LAT = *p++;
    SEG_B_LAT = *p++;
    SEG_C_LAT = *p++;
    SEG_D_LAT = *p++;
    SEG_E_LAT = *p++;
    SEG_F_LAT = *p++;
    SEG_G_LAT = *p++;
}
void digitShow(uint8_t value){   
    uint8_t *p=&matrix[value*7];
    SEG_A_LAT = ~*p++;
    SEG_B_LAT = ~*p++;
    SEG_C_LAT = ~*p++;
    SEG_D_LAT = ~*p++;
    SEG_E_LAT = ~*p++;
    SEG_F_LAT = ~*p++;
    SEG_G_LAT = ~*p++;
}
void SetShow(uint8_t value){
    uint8_t *p=&Set[value*7];
    SEG_A_LAT = *p++;
    SEG_B_LAT = *p++;
    SEG_C_LAT = *p++;
    SEG_D_LAT = *p++;
    SEG_E_LAT = *p++;
    SEG_F_LAT = *p++;
    SEG_G_LAT = *p++;
}
// function for getting combo from user
void RunningADCC(uint8_t digit,uint8_t tens,int *combo1,int *combo2,int *combo3,int *combo4,int count,int value,bool running){	
	while(running){   
		digit=(ADCC_GetSingleConversion(POT)>>4)%10;
		tens =(ADCC_GetSingleConversion(POT)>>4)/10;
		value =(ADCC_GetSingleConversion(POT))/16;
		A3_SetHigh();
		A4_SetLow();
		digitShow(digit);
		__delay_ms(5);
		A4_SetHigh();
		digitShow(tens);
		A4_SetHigh();  
		A3_SetLow();
		digitShow(tens);
		__delay_ms(5);
		A3_SetHigh();
		digitShow(digit);
		if (BTN_GetValue() == 0){
			__delay_ms(200);
			switch(count){
				case 0: 
					*combo1 =  value;//combo(digit,tens);
                    LED0_SetHigh();
					break;
				case 1:
				    *combo2 =  value;//combo(digit,tens);
                    LED1_SetHigh();
					break;
				case 2:
					*combo3 = value;// combo(digit,tens);	
                    LED2_SetHigh();
					break;
				case 3:
					*combo4 = value; //combo(digit,tens);	
                    LED3_SetHigh();
					running = false;
                    break;
				default: 
                    break;
			};
			count++;
		}
	}
}
// function for setting a new combo
void RunningNew(uint8_t digit,uint8_t tens,int *num1,int *num2,int *num3,int *num4,int *value,bool working){   
    int count = 0;
    Reset();
    while(working){
        digit=(ADCC_GetSingleConversion(POT)>>4)%10;
        tens =(ADCC_GetSingleConversion(POT)>>4)/10;
        value =(ADCC_GetSingleConversion(POT))/16;
        A3_SetHigh();
        A4_SetLow();
        digitShow(digit);
        __delay_ms(5);
        A4_SetHigh();
        digitShow(tens);
        A4_SetHigh();  
        A3_SetLow();
        digitShow(tens);
        __delay_ms(5);
        A3_SetHigh();
        digitShow(digit);
        if(BTN_GetValue()==0){
            __delay_ms(200);
            switch(count){
                case 0: 
                    *num1 =  value;
                    LED0_SetHigh();
                    break;
                case 1:
                    *num2 =  value;
                    LED1_SetHigh();
                    break;
                case 2:
                    *num3 = value;
                    LED2_SetHigh();
                    break;
                case 3:
                    *num4 = value;
                    LED3_SetHigh();
                    ScrollSet();
                    DisplayLock();
                    working= false;
                    break;
                default:
                    break;
            };
        count++;
        }
    }
}
// function for displaying messages
void DisplayOpen(){
        A1_SetHigh();
        A4_SetLow();
        OpenShow(3);
        __delay_ms(5);
        A4_SetHigh();
        OpenShow(2);
        A4_SetHigh();  
        A3_SetLow();
        OpenShow(2);
        __delay_ms(5);
        A3_SetHigh();
        OpenShow(1);
        A3_SetHigh();
        A2_SetLow();
        OpenShow(1);
        __delay_ms(5);
        A2_SetHigh();
        OpenShow(0);
        A2_SetHigh();
        A1_SetLow();
        OpenShow(0);
        __delay_ms(5);
        A1_SetHigh();
        OpenShow(3);  
}
void DisplayLock(){
    int count = 0;
    while(count < 100){
        A1_SetHigh();
        A4_SetLow();
        LockShow(3);
        __delay_ms(5);
        A4_SetHigh();
        LockShow(2);
        A4_SetHigh();  
        A3_SetLow();
        LockShow(2);
        __delay_ms(5);
        A3_SetHigh();
        LockShow(1);
        A3_SetHigh();
        A2_SetLow();
        LockShow(1);
        __delay_ms(5);
        A2_SetHigh();
        LockShow(0);
        A2_SetHigh();
        A1_SetLow();
        LockShow(0);
        __delay_ms(5);
        A1_SetHigh();
        LockShow(3);       
        count++;
    }
}
void DisplayDeny(){
    int count = 0;
    while(count < 100){
        A1_SetHigh();
        A4_SetLow();
        DenyShow(3);
        __delay_ms(5);
        A4_SetHigh();
        DenyShow(2);
        A4_SetHigh();  
        A3_SetLow();
        DenyShow(2);
        __delay_ms(5);
        A3_SetHigh();
        DenyShow(1);
        A3_SetHigh();
        A2_SetLow();
        DenyShow(1);
        __delay_ms(5);
        A2_SetHigh();
        DenyShow(0);
        A2_SetHigh();
        A1_SetLow();
        DenyShow(0);
        __delay_ms(5);
        A1_SetHigh();
        DenyShow(3);
        count++;
    }
}
//function for scrolling messages
void Scrollnew(){
    int scrl_len = 0, scrl_speed = 0;
        int count = 0;
    while(count < 3){
        LED0_SetHigh();
        LED1_SetHigh();
        LED2_SetHigh();
        LED3_SetHigh();
        __delay_ms(200);
        LED0_SetLow();
        LED1_SetLow();
        LED2_SetLow();
        LED3_SetLow();
        __delay_ms(200);
        count++;
    } 
    while (scrl_len<12){ 
        while (scrl_speed < 11){
            A4_SetLow();
            __delay_ms(3);
            A4_SetHigh();    
            NewShow(scrl_len+2);
            __delay_ms(1); 
            A3_SetLow();
            __delay_ms(3);
            A3_SetHigh();
            NewShow(scrl_len+1);
            __delay_ms(1);
            A2_SetLow();
            __delay_ms(3);
            A2_SetHigh();
            NewShow(scrl_len);
            __delay_ms(1);
            A1_SetLow();
            __delay_ms(3);
            A1_SetHigh();
            NewShow(scrl_len+3);
            __delay_ms(1);
            scrl_speed++;
        }
        scrl_speed=0;
        scrl_len++;
    }
A1_SetHigh();
A2_SetHigh();
A3_SetHigh();
A4_SetHigh();
}
void ScrollSet(){
    int scrl_len = 0, scrl_speed = 0;
    while (scrl_len<12){ 
        while (scrl_speed < 11){
            A4_SetLow();
            __delay_ms(3);
            A4_SetHigh();    
            SetShow(scrl_len+2);
            __delay_ms(1); 
            A3_SetLow();
            __delay_ms(3);
            A3_SetHigh();
            SetShow(scrl_len+1);
            __delay_ms(1);
            A2_SetLow();
            __delay_ms(3);
            A2_SetHigh();
            SetShow(scrl_len);
            __delay_ms(1);
            A1_SetLow();
            __delay_ms(3);
            A1_SetHigh();
            SetShow(scrl_len+3);
            __delay_ms(1);
            scrl_speed++;
        }
        scrl_speed=0;
        scrl_len++;
    }
    int count = 0;
while(count < 3){
    LED0_SetHigh();
    LED1_SetHigh();
    LED2_SetHigh();
    LED3_SetHigh();
    __delay_ms(200);
    LED0_SetLow();
    LED1_SetLow();
    LED2_SetLow();
    LED3_SetLow();
    __delay_ms(200);
    count++;
} 
A1_SetHigh();
A2_SetHigh();
A3_SetHigh();
A4_SetHigh();
}