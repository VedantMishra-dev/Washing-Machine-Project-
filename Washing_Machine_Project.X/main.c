//#include "main.h"
//#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
//
//unsigned char operational_mode = WASHIING_PROGRAM_SCREEN;
//unsigned char reset_flag = RESET_WASH_PROGRAM_SCREEN;
////
//static void init_config(void) {
//    //initialize clcd
//    init_clcd();
//    //initialize digital keypad
//    init_digital_keypad();
//    //initialize timer
//    init_timer2();
//
////    //Enable global and peripheral interrupts
//    GIE = 1;
//    PEIE = 1;
//    BUZZER_DDR = 0;
//    FAN_DDR = 0;
//    BUZZER = OFF;
//    FAN = OFF;
//}
//
//void main(void) {
//    unsigned char key;
//    init_config();
////    
////   
////
////    // Continuously display message until SW5 is pressed
//    while (read_digital_keypad(STATE) != SW5) {
//        
//        for (unsigned int delay = 300; delay--;);\
//
//        clcd_print("Press Key5 to", LINE1(1));
//        clcd_print("Power On", LINE2(5));
//        clcd_print("Washing Machine", LINE3(1));
//    }
//
////    // If SW5 is pressed
//    clear_screen(); // clear the LCD
//    power_on_screen(); // show power on screen
////
////    while (1) {
////        /*key = read_digital_keypad(STATE);
////        //to avoid bouncing effect
//////       for (unsigned int delay = 300; delay--;);
////
////        if ((key == LPSW4) && (operational_mode == WASHIING_PROGRAM_SCREEN)) {
////            operational_mode = WATER_LEVEL_SCREEN;
////            reset_flag = RESET_WASH_PROGRAM_SCREEN;
////        }
////        else if ((key == LPSW4) && (operational_mode == WATER_LEVEL_SCREEN)) {
////            operational_mode = START_STOP_SCREEN;
////            clear_screen();
////            clcd_print("Press Switch", LINE1(0));
////        }
////
////
////        //
////        //        key = read_digital_keypad(STATE);
////        //
////        //        if (operational_mode == WASHIING_PROGRAM_SCREEN) {
////        //            if (key == SW4) {
////        //                washing_program_display(SW4); // short press to scroll
////        //            } else if (key == LPSW4) {
////        //                operational_mode = WATER_LEVEL_SCREEN;
////        //                reset_flag = RESET_WASH_PROGRAM_SCREEN;
////        //            }
////        //        } else if (operational_mode == WATER_LEVEL_SCREEN) {
////        //            water_level_screen(key); // SW4 scrolls water level
////        //        }*/
////
//        key = read_digital_keypad(STATE);
////
////        //to avoid bouncing effect
//        for(unsigned int delay = 3000;delay--;);
////
////         
//          if ((key == LPSW4) && (operational_mode == WASHIING_PROGRAM_SCREEN)) {
//            operational_mode = WATER_LEVEL_SCREEN;
//            reset_flag = RESET_WASH_PROGRAM_SCREEN;
//        }
//        else if ((key == LPSW4) && (operational_mode == WATER_LEVEL_SCREEN)) {
//            operational_mode = START_STOP_SCREEN;
//            clear_screen();
//            clcd_print("Press Switch", LINE1(0));
//            clcd_print("SW5: Start", LINE2(0));
//            clcd_print("SW6: Stop", LINE3(0));
//            set_time();
//        }
////
//        else if(key == SW5 && operational_mode == PAUSE) {
//            operational_mode = START_SCREEN;
//            TMR2ON = ON;
//            FAN = ON;
//        }
////        
//////        // Washing program screen
//        if (operational_mode == WASHIING_PROGRAM_SCREEN) {
//            if (key == SW4) {
//                washing_program_display(SW4);
//            } else if (key == LPSW4) {
//                operational_mode = WATER_LEVEL_SCREEN;
//                reset_flag = RESET_WATER_LEVEL_SCREEN;
//            }
//        }
//////            // Water level screen
//        else if (operational_mode == WATER_LEVEL_SCREEN) {
//            if (key == LPSW4) {
//                operational_mode = START_STOP_SCREEN;
//                reset_flag = RESET_START_SCREEN;
//            } else {
//                water_level_screen(key); // SW4 scrolls water levels
//            }
//        }
//////            // Start/Stop screen
//        else if (operational_mode == START_STOP_SCREEN) {
//            start_stop_screen(); // display message
//        }
//
//
////        switch (operational_mode) {
////            case WASHIING_PROGRAM_SCREEN:
////                washing_program_display(key);
////                break;
////            case WATER_LEVEL_SCREEN:
////                water_level_screen(key);
////                break;
////            case START_STOP_SCREEN:
////            {
////                if(key == SW5) {
////                    operational_mode = START_SCREEN;
////                    reset_flag = RESET_START_SCREEN;
////                }
////                else if(key == SW6) {
////                    operational_mode = WASHIING_PROGRAM_SCREEN;
////                    reset_flag = RESET_WASH_PROGRAM_SCREEN;
////                }
////            }
////                break;
////            case START_SCREEN :
////                run_program(key);
////                break;
////            }  
////
////    }
//    
//    
//        switch (operational_mode) {
//            case WASHIING_PROGRAM_SCREEN:
//                washing_program_display(key);
//                break;
//            case WATER_LEVEL_SCREEN:
//                water_level_screen(key);
//                break;
//            case START_STOP_SCREEN:
//            {
//                if(key == SW5) {
//                    operational_mode = START_SCREEN;
//                    reset_flag = RESET_START_SCREEN;
//                }
//                else if(key == SW6) {
//                    operational_mode = WASHIING_PROGRAM_SCREEN;
//                    reset_flag = RESET_WASH_PROGRAM_SCREEN;
//                }
//            }
//                break;
//            case START_SCREEN :
//                run_program(key);
//                break;
//            }  
//
//    }
//    
//
////
////
////
////#include "main.h"
////#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
////
////unsigned char operational_mode = WASHIING_PROGRAM_SCREEN;
////unsigned char reset_flag = RESET_WASH_PROGRAM_SCREEN;
////
////static void init_config(void) {
////    //initialize clcd
////    init_clcd();
////    //initialize digital keypad
////    init_digital_keypad();
////    //initialize timer
////    init_timer2();
////
////    //Enable global and peripheral interrupts
////    GIE = 1;
////    PEIE = 1;
////    BUZZER_DDR = 0;
////    FAN_DDR = 0;
////    BUZZER = OFF;
////    FAN = OFF;
////}
////
////void main(void) {
////    unsigned char key;
////    init_config();
////
////
////
////    // Continuously display message until SW5 is pressed
////    while (read_digital_keypad(STATE) != SW5) {
////
////        for (unsigned int delay = 300; delay--;);\
////
////        clcd_print("Press Key5 to", LINE1(1));
////        clcd_print("Power On", LINE2(5));
////        clcd_print("Washing Machine", LINE3(1));
////    }
////
////    // If SW5 is pressed
////    clear_screen(); // clear the LCD
////    power_on_screen(); // show power on screen
////
////    while (1) {
////        /*key = read_digital_keypad(STATE);
////        //to avoid bouncing effect
//////       for (unsigned int delay = 300; delay--;);
////
////        if ((key == LPSW4) && (operational_mode == WASHIING_PROGRAM_SCREEN)) {
////            operational_mode = WATER_LEVEL_SCREEN;
////            reset_flag = RESET_WASH_PROGRAM_SCREEN;
////        }
////        else if ((key == LPSW4) && (operational_mode == WATER_LEVEL_SCREEN)) {
////            operational_mode = START_STOP_SCREEN;
////            clear_screen();
////            clcd_print("Press Switch", LINE1(0));
////        }
////
////
////        //
////        //        key = read_digital_keypad(STATE);
////        //
////        //        if (operational_mode == WASHIING_PROGRAM_SCREEN) {
////        //            if (key == SW4) {
////        //                washing_program_display(SW4); // short press to scroll
////        //            } else if (key == LPSW4) {
////        //                operational_mode = WATER_LEVEL_SCREEN;
////        //                reset_flag = RESET_WASH_PROGRAM_SCREEN;
////        //            }
////        //        } else if (operational_mode == WATER_LEVEL_SCREEN) {
////        //            water_level_screen(key); // SW4 scrolls water level
////        //        }*/
////
////        key = read_digital_keypad(STATE);
////
////        //to avoid bouncing effect
////        for (unsigned int delay = 3000; delay--;);
////
////
////        if ((key == LPSW4) && (operational_mode == WASHIING_PROGRAM_SCREEN)) {
////            operational_mode = WATER_LEVEL_SCREEN;
////            reset_flag = RESET_WASH_PROGRAM_SCREEN;
////        } else if ((key == LPSW4) && (operational_mode == WATER_LEVEL_SCREEN)) {
////            operational_mode = START_STOP_SCREEN;
////            clear_screen();
////            clcd_print("Press Switch", LINE1(0));
////            clcd_print("SW5: Start", LINE2(0));
////            clcd_print("SW6: Stop", LINE3(0));
////            set_time();
////        }
////        else if (key == SW5 && operational_mode == PAUSE) {
////            operational_mode = START_SCREEN;
////            TMR2ON = ON;
////            FAN = ON;
////        }
////
////        //        // Washing program screen
////        //        if (operational_mode == WASHIING_PROGRAM_SCREEN) {
////        //            if (key == SW4) {
////        //                washing_program_display(SW4);
////        //            } else if (key == LPSW4) {
////        //                operational_mode = WATER_LEVEL_SCREEN;
////        //                reset_flag = RESET_WATER_LEVEL_SCREEN;
////        //            }
////        //        }
////        //            // Water level screen
////        //        else if (operational_mode == WATER_LEVEL_SCREEN) {
////        //            if (key == LPSW4) {
////        //                operational_mode = START_STOP_SCREEN;
////        //                reset_flag = RESET_START_SCREEN;
////        //            } else {
////        //                water_level_screen(key); // SW4 scrolls water levels
////        //            }
////        //        }
////        //            // Start/Stop screen
////        //        else if (operational_mode == START_STOP_SCREEN) {
////        //            start_stop_screen(); // display message
////        //        }
////
////
////        switch (operational_mode) {
////            case WASHIING_PROGRAM_SCREEN:
////                washing_program_display(key);
////                break;
////            case WATER_LEVEL_SCREEN:
////                water_level_screen(key);
////                break;
////            case START_STOP_SCREEN:
////            {
////                if (key == SW5) {
////                    operational_mode = START_SCREEN;
////                    reset_flag = RESET_START_SCREEN;
////                }
////                else if (key == SW6) {
////                    operational_mode = WASHIING_PROGRAM_SCREEN;
////                    reset_flag = RESET_WASH_PROGRAM_SCREEN;
////                }
////            }
////                break;
////            case START_SCREEN:
////                run_program(key);
////                break;
////
////        }
////    }
////}
////
//// 



#include "main.h"
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

unsigned char operational_mode = WASHIING_PROGRAM_SCREEN;
unsigned char reset_flag = RESET_WASH_PROGRAM_SCREEN;

static void init_config(void) {
    //initialize clcd
    init_clcd();
    //initialize digital keypad
    init_digital_keypad();
    //initialize timer
    init_timer2();

    //Enable global and peripheral interrupts
    GIE = 1;
    PEIE = 1;
    BUZZER_DDR = 0;
    FAN_DDR = 0;
    BUZZER = OFF;
    FAN = OFF;
}

void main(void) {
    unsigned char key;
    init_config();
    
   

    // Continuously display message until SW5 is pressed
    while (read_digital_keypad(STATE) != SW5) {
        
        for (unsigned int delay = 300; delay--;);\

        clcd_print("Press Key5 to", LINE1(1));
        clcd_print("Power On", LINE2(5));
        clcd_print("Washing Machine", LINE3(1));
    }

    // If SW5 is pressed
    clear_screen(); // clear the LCD
    power_on_screen(); // show power on screen

    while (1) {
        /*key = read_digital_keypad(STATE);
        //to avoid bouncing effect
//       for (unsigned int delay = 300; delay--;);

        if ((key == LPSW4) && (operational_mode == WASHIING_PROGRAM_SCREEN)) {
            operational_mode = WATER_LEVEL_SCREEN;
            reset_flag = RESET_WASH_PROGRAM_SCREEN;
        }
        else if ((key == LPSW4) && (operational_mode == WATER_LEVEL_SCREEN)) {
            operational_mode = START_STOP_SCREEN;
            clear_screen();
            clcd_print("Press Switch", LINE1(0));
        }


        //
        //        key = read_digital_keypad(STATE);
        //
        //        if (operational_mode == WASHIING_PROGRAM_SCREEN) {
        //            if (key == SW4) {
        //                washing_program_display(SW4); // short press to scroll
        //            } else if (key == LPSW4) {
        //                operational_mode = WATER_LEVEL_SCREEN;
        //                reset_flag = RESET_WASH_PROGRAM_SCREEN;
        //            }
        //        } else if (operational_mode == WATER_LEVEL_SCREEN) {
        //            water_level_screen(key); // SW4 scrolls water level
        //        }*/

        key = read_digital_keypad(STATE);

        //to avoid bouncing effect
        for(unsigned int delay = 3000;delay--;);

         
          if ((key == LPSW4) && (operational_mode == WASHIING_PROGRAM_SCREEN)) {
                  __delay_ms(2); // Give time for LCD to fully clear

            operational_mode = WATER_LEVEL_SCREEN;
            reset_flag = RESET_WASH_PROGRAM_SCREEN;
        }
        else if ((key == LPSW4) && (operational_mode == WATER_LEVEL_SCREEN)) {
            operational_mode = START_STOP_SCREEN;
            clear_screen();
            clcd_print("Press Switch", LINE1(0));
            clcd_print("SW5: Start", LINE2(0));
            clcd_print("SW6: Stop", LINE3(0));
            set_time();
        }

        else if(key == SW5 && operational_mode == PAUSE) {
            operational_mode = START_SCREEN;
            TMR2ON = ON;
            FAN = ON;
        }
        
//        // Washing program screen
//        if (operational_mode == WASHIING_PROGRAM_SCREEN) {
//            if (key == SW4) {
//                washing_program_display(SW4);
//            } else if (key == LPSW4) {
//                operational_mode = WATER_LEVEL_SCREEN;
//                reset_flag = RESET_WATER_LEVEL_SCREEN;
//            }
//        }
//            // Water level screen
//        else if (operational_mode == WATER_LEVEL_SCREEN) {
//            if (key == LPSW4) {
//                operational_mode = START_STOP_SCREEN;
//                reset_flag = RESET_START_SCREEN;
//            } else {
//                water_level_screen(key); // SW4 scrolls water levels
//            }
//        }
//            // Start/Stop screen
//        else if (operational_mode == START_STOP_SCREEN) {
//            start_stop_screen(); // display message
//        }


        switch (operational_mode) {
            case WASHIING_PROGRAM_SCREEN:
                washing_program_display(key);
                break;
            case WATER_LEVEL_SCREEN:

                water_level_screen(key);
                break;
            case START_STOP_SCREEN:
            {
                if(key == SW5) {
                    operational_mode = START_SCREEN;
                    reset_flag = RESET_START_SCREEN;
                }
                else if(key == SW6) {
                    operational_mode = WASHIING_PROGRAM_SCREEN;
                    reset_flag = RESET_WASH_PROGRAM_SCREEN;
                }
            }
                break;
            case START_SCREEN :
                run_program(key);
                break;
            }  

    }
}