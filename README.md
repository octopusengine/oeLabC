# oeLabC
octopus engine Lab (for <b>Raspberry Pi 3</b> - GPIO &amp; graphics) C/C++



<hr />
<h2>openVG</h2>
C graphics library for Raspberry Pi<br />
https://github.com/ajstarks/openvg <br />
see https://github.com/ajstarks/openvg#build-and-run<br />
<br />
<hr />
<h2>bcm2835</h2>
GPIO library for Raspberry Pi - <i>testing: 1.50 / 2016-02-28</i><br />
http://www.airspayce.com/mikem/bcm2835/<br />
see http://www.raspberry-projects.com/pi/programming-in-c/io-pins/bcm2835-by-mike-mccauley<br />
<hr />
<pre>
//compile: 
//gcc -Wall -I/opt/vc/include -I/opt/vc/include/interface/vmcs_host/linux -I/opt/vc/include/interface/vcos/pthreads -I..  -o oeLab oeLab.c ./openvg/libshapes.o ./openvg/oglinit.o -L/opt/vc/lib -lEGL -lGLESv2 -lbcm_host -lpthread  -ljpeg  -l bcm2835
//run: 
//sudo ./oeLab
</pre>
<br />

