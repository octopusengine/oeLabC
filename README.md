# oeLabC
octopus engine Lab (for raspberry Pi 3 - GPIO &amp; graphics) C/C++



<hr />
openVG<br />
https://github.com/ajstarks/openvg <br />

<hr />
bcm
<br />
<hr />
<pre>
//compile: 
//gcc -Wall -I/opt/vc/include -I/opt/vc/include/interface/vmcs_host/linux -I/opt/vc/include/interface/vcos/pthreads -I..  -o oeLab oeLab.c ./openvg/libshapes.o ./openvg/oglinit.o -L/opt/vc/lib -lEGL -lGLESv2 -lbcm_host -lpthread  -ljpeg  -l bcm2835
//run: 
//sudo ./oelab
</pre>

