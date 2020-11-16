/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED0 aliases
#define LED0_TRIS                 TRISAbits.TRISA0
#define LED0_LAT                  LATAbits.LATA0
#define LED0_PORT                 PORTAbits.RA0
#define LED0_WPU                  WPUAbits.WPUA0
#define LED0_OD                   ODCONAbits.ODCA0
#define LED0_ANS                  ANSELAbits.ANSA0
#define LED0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED0_GetValue()           PORTAbits.RA0
#define LED0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA1
#define LED1_LAT                  LATAbits.LATA1
#define LED1_PORT                 PORTAbits.RA1
#define LED1_WPU                  WPUAbits.WPUA1
#define LED1_OD                   ODCONAbits.ODCA1
#define LED1_ANS                  ANSELAbits.ANSA1
#define LED1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED1_GetValue()           PORTAbits.RA1
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA2
#define LED2_LAT                  LATAbits.LATA2
#define LED2_PORT                 PORTAbits.RA2
#define LED2_WPU                  WPUAbits.WPUA2
#define LED2_OD                   ODCONAbits.ODCA2
#define LED2_ANS                  ANSELAbits.ANSA2
#define LED2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED2_GetValue()           PORTAbits.RA2
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISAbits.TRISA3
#define LED3_LAT                  LATAbits.LATA3
#define LED3_PORT                 PORTAbits.RA3
#define LED3_WPU                  WPUAbits.WPUA3
#define LED3_OD                   ODCONAbits.ODCA3
#define LED3_ANS                  ANSELAbits.ANSA3
#define LED3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED3_GetValue()           PORTAbits.RA3
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set POT aliases
#define POT_TRIS                 TRISAbits.TRISA4
#define POT_LAT                  LATAbits.LATA4
#define POT_PORT                 PORTAbits.RA4
#define POT_WPU                  WPUAbits.WPUA4
#define POT_OD                   ODCONAbits.ODCA4
#define POT_ANS                  ANSELAbits.ANSA4
#define POT_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define POT_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define POT_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define POT_GetValue()           PORTAbits.RA4
#define POT_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define POT_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define POT_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define POT_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define POT_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define POT_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define POT_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define POT_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set BTN aliases
#define BTN_TRIS                 TRISAbits.TRISA5
#define BTN_LAT                  LATAbits.LATA5
#define BTN_PORT                 PORTAbits.RA5
#define BTN_WPU                  WPUAbits.WPUA5
#define BTN_OD                   ODCONAbits.ODCA5
#define BTN_ANS                  ANSELAbits.ANSA5
#define BTN_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define BTN_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define BTN_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define BTN_GetValue()           PORTAbits.RA5
#define BTN_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define BTN_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define BTN_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define BTN_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define BTN_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define BTN_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define BTN_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define BTN_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SEG_E aliases
#define SEG_E_TRIS                 TRISBbits.TRISB0
#define SEG_E_LAT                  LATBbits.LATB0
#define SEG_E_PORT                 PORTBbits.RB0
#define SEG_E_WPU                  WPUBbits.WPUB0
#define SEG_E_OD                   ODCONBbits.ODCB0
#define SEG_E_ANS                  ANSELBbits.ANSB0
#define SEG_E_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SEG_E_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SEG_E_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SEG_E_GetValue()           PORTBbits.RB0
#define SEG_E_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SEG_E_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SEG_E_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SEG_E_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SEG_E_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SEG_E_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SEG_E_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define SEG_E_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set SEG_D aliases
#define SEG_D_TRIS                 TRISBbits.TRISB1
#define SEG_D_LAT                  LATBbits.LATB1
#define SEG_D_PORT                 PORTBbits.RB1
#define SEG_D_WPU                  WPUBbits.WPUB1
#define SEG_D_OD                   ODCONBbits.ODCB1
#define SEG_D_ANS                  ANSELBbits.ANSB1
#define SEG_D_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SEG_D_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SEG_D_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SEG_D_GetValue()           PORTBbits.RB1
#define SEG_D_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SEG_D_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SEG_D_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SEG_D_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SEG_D_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SEG_D_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SEG_D_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define SEG_D_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set SEG_DP aliases
#define SEG_DP_TRIS                 TRISBbits.TRISB2
#define SEG_DP_LAT                  LATBbits.LATB2
#define SEG_DP_PORT                 PORTBbits.RB2
#define SEG_DP_WPU                  WPUBbits.WPUB2
#define SEG_DP_OD                   ODCONBbits.ODCB2
#define SEG_DP_ANS                  ANSELBbits.ANSB2
#define SEG_DP_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SEG_DP_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SEG_DP_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SEG_DP_GetValue()           PORTBbits.RB2
#define SEG_DP_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SEG_DP_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SEG_DP_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SEG_DP_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SEG_DP_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SEG_DP_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SEG_DP_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define SEG_DP_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set SEG_C aliases
#define SEG_C_TRIS                 TRISBbits.TRISB3
#define SEG_C_LAT                  LATBbits.LATB3
#define SEG_C_PORT                 PORTBbits.RB3
#define SEG_C_WPU                  WPUBbits.WPUB3
#define SEG_C_OD                   ODCONBbits.ODCB3
#define SEG_C_ANS                  ANSELBbits.ANSB3
#define SEG_C_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define SEG_C_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define SEG_C_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define SEG_C_GetValue()           PORTBbits.RB3
#define SEG_C_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define SEG_C_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define SEG_C_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define SEG_C_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define SEG_C_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define SEG_C_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define SEG_C_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define SEG_C_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set SEG_G aliases
#define SEG_G_TRIS                 TRISBbits.TRISB4
#define SEG_G_LAT                  LATBbits.LATB4
#define SEG_G_PORT                 PORTBbits.RB4
#define SEG_G_WPU                  WPUBbits.WPUB4
#define SEG_G_OD                   ODCONBbits.ODCB4
#define SEG_G_ANS                  ANSELBbits.ANSB4
#define SEG_G_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SEG_G_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SEG_G_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SEG_G_GetValue()           PORTBbits.RB4
#define SEG_G_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SEG_G_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SEG_G_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SEG_G_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SEG_G_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SEG_G_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SEG_G_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SEG_G_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set A4 aliases
#define A4_TRIS                 TRISBbits.TRISB5
#define A4_LAT                  LATBbits.LATB5
#define A4_PORT                 PORTBbits.RB5
#define A4_WPU                  WPUBbits.WPUB5
#define A4_OD                   ODCONBbits.ODCB5
#define A4_ANS                  ANSELBbits.ANSB5
#define A4_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define A4_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define A4_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define A4_GetValue()           PORTBbits.RB5
#define A4_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define A4_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define A4_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define A4_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define A4_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define A4_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define A4_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define A4_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SEG_A aliases
#define SEG_A_TRIS                 TRISCbits.TRISC2
#define SEG_A_LAT                  LATCbits.LATC2
#define SEG_A_PORT                 PORTCbits.RC2
#define SEG_A_WPU                  WPUCbits.WPUC2
#define SEG_A_OD                   ODCONCbits.ODCC2
#define SEG_A_ANS                  ANSELCbits.ANSC2
#define SEG_A_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SEG_A_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SEG_A_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SEG_A_GetValue()           PORTCbits.RC2
#define SEG_A_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SEG_A_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SEG_A_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SEG_A_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SEG_A_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SEG_A_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SEG_A_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define SEG_A_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SEG_B aliases
#define SEG_B_TRIS                 TRISCbits.TRISC3
#define SEG_B_LAT                  LATCbits.LATC3
#define SEG_B_PORT                 PORTCbits.RC3
#define SEG_B_WPU                  WPUCbits.WPUC3
#define SEG_B_OD                   ODCONCbits.ODCC3
#define SEG_B_ANS                  ANSELCbits.ANSC3
#define SEG_B_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SEG_B_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SEG_B_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SEG_B_GetValue()           PORTCbits.RC3
#define SEG_B_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SEG_B_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SEG_B_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SEG_B_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SEG_B_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SEG_B_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SEG_B_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SEG_B_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set A3 aliases
#define A3_TRIS                 TRISCbits.TRISC4
#define A3_LAT                  LATCbits.LATC4
#define A3_PORT                 PORTCbits.RC4
#define A3_WPU                  WPUCbits.WPUC4
#define A3_OD                   ODCONCbits.ODCC4
#define A3_ANS                  ANSELCbits.ANSC4
#define A3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define A3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define A3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define A3_GetValue()           PORTCbits.RC4
#define A3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define A3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define A3_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define A3_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define A3_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define A3_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define A3_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define A3_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set A2 aliases
#define A2_TRIS                 TRISCbits.TRISC5
#define A2_LAT                  LATCbits.LATC5
#define A2_PORT                 PORTCbits.RC5
#define A2_WPU                  WPUCbits.WPUC5
#define A2_OD                   ODCONCbits.ODCC5
#define A2_ANS                  ANSELCbits.ANSC5
#define A2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define A2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define A2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define A2_GetValue()           PORTCbits.RC5
#define A2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define A2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define A2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define A2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define A2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define A2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define A2_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define A2_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set SEG_F aliases
#define SEG_F_TRIS                 TRISCbits.TRISC6
#define SEG_F_LAT                  LATCbits.LATC6
#define SEG_F_PORT                 PORTCbits.RC6
#define SEG_F_WPU                  WPUCbits.WPUC6
#define SEG_F_OD                   ODCONCbits.ODCC6
#define SEG_F_ANS                  ANSELCbits.ANSC6
#define SEG_F_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SEG_F_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SEG_F_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SEG_F_GetValue()           PORTCbits.RC6
#define SEG_F_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SEG_F_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SEG_F_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SEG_F_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SEG_F_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define SEG_F_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define SEG_F_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SEG_F_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set A1 aliases
#define A1_TRIS                 TRISCbits.TRISC7
#define A1_LAT                  LATCbits.LATC7
#define A1_PORT                 PORTCbits.RC7
#define A1_WPU                  WPUCbits.WPUC7
#define A1_OD                   ODCONCbits.ODCC7
#define A1_ANS                  ANSELCbits.ANSC7
#define A1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define A1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define A1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define A1_GetValue()           PORTCbits.RC7
#define A1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define A1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define A1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define A1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define A1_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define A1_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define A1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define A1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/