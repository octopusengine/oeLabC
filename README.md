# oeLabC
octopus engine Lab (for raspberry Pi 3 - GPIO &amp; graphics) C/C++



<hr />
<h2>openVG<h2>
C graphics library for Raspberry Pi<br />
https://github.com/ajstarks/openvg <br />

<hr />
<h2>bcm2835</h2>
GPIO library for Raspberry Pi<br />
<br />
<hr />
<pre>
//compile: 
//gcc -Wall -I/opt/vc/include -I/opt/vc/include/interface/vmcs_host/linux -I/opt/vc/include/interface/vcos/pthreads -I..  -o oeLab oeLab.c ./openvg/libshapes.o ./openvg/oglinit.o -L/opt/vc/lib -lEGL -lGLESv2 -lbcm_host -lpthread  -ljpeg  -l bcm2835
//run: 
//sudo ./oelab
</pre>

