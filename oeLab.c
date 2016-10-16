//oelab 0.03 ok - openvg & bcm2835
// ------------
//OpenVG - Anthony Starks (ajstarks@gmail.com)
//
// ------------
// bcm2835
// http://www.airspayce.com/mikem/bcm2835/input_8c-example.html
// ------------
//compile: 
//gcc -Wall -I/opt/vc/include -I/opt/vc/include/interface/vmcs_host/linux -I/opt/vc/include/interface/vcos/pthreads -I..  -o oeLab oeLab.c ./openvg/libshapes.o ./openvg/oglinit.o -L/opt/vc/lib -lEGL -lGLESv2 -lbcm_host -lpthread  -ljpeg  -l bcm2835
//run: 
//sudo ./oelab
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "VG/openvg.h"
#include "VG/vgu.h"
#include "fontinfo.h"
#include "shapes.h"

#include <bcm2835.h>
#define LED1 RPI_GPIO_P1_12 //11
//BUTT = 26 //sda 3

void blink() {
	bcm2835_gpio_write(LED1, HIGH);
    bcm2835_delay(1000);
    bcm2835_gpio_write(LED1, LOW);
    bcm2835_delay(1000);
	}
	
void intro(int width, int height) {
	Start(width, height);                   // Start the picture
    Background(0, 0, 0);                    // Black background
    
    Fill(44, 77, 232, 1);                   // Big blue marble
    Circle(width / 2, 0, width);            
    
    Fill(255, 255, 255, 1);                 // White text
    TextMid(width / 2, height / 2, "oeLab", SerifTypeface, width / 10); 
      
    End();  
    
    blink();
    blink();   
    }	
	
int main() {
	//---init
	if (!bcm2835_init())  return 1;
    bcm2835_gpio_fsel(LED1, BCM2835_GPIO_FSEL_OUTP);
	
	int width, height;
    char s[3];

    init(&width, &height);                  // Graphics initialization
    //---/init    
    
    intro(width, height);                            
    
    int tx;
    for (tx=1; tx<100;tx++)
    //int tx=10;
    {
    Start(width, height);
    
    Fill(33, 77, 232, 1);                  
    Circle(width / 2+tx, 0, width/tx*10);
    
    //Background(44, 77, 232);
    Fill(0,0,0, 1);       
    TextMid(50, 50+tx*2, "test", SerifTypeface, 20); 
    End();     
     
    sleep(0.05);    
    }
    
    blink();

    fgets(s, 2, stdin);                     // look at the pic, end with [RETURN]
    finish();                               // Graphics cleanup
    exit(0);
}
