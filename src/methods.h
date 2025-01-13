#define NUM_LEDS 23

void scene()
{
	if (digitalRead(b4) == HIGH)
		e11 = 1;
	if (e11 == 1)
	{
		if (digitalRead(b4) == LOW)
		{
			delay(50);
			if (digitalRead(b4) == LOW)
			{
				mode++;
				e11 = 0;
				for (size_t i = 0; i < 23; i++)	{
					sat[i]=h;	val[i]=h;
				}
			}
		}
	}
	if (mode > 7)
		mode = 1;
}
void type()
{
	analogWrite(s5, 1);
	if (e12 != mode)
	{
		digitalWrite(sre, HIGH);
		digitalWrite(sgr, HIGH);
		digitalWrite(sbl, HIGH);
		e13 = mode;
		e12 = mode;
		if (e13 > 3)
		{
			digitalWrite(sgr, LOW);
			e13 -= 4;
		}
		if (e13 > 1)
		{
			digitalWrite(sbl, LOW);
			e13 -= 2;
		}
		if (e13 > 0)
		{
			digitalWrite(sre, LOW);
			e13 -= 1;
		}
		//if(e13>3){analogWrite(sgr,254);e13-=4;}if(e13>1){analogWrite(sbl,254);e13-=2;}if(e13>0){analogWrite(sre,254);e13-=1;}

	}
	
}

void copy(){

		strip.setPixelColor(0, strip.ColorHSV(rcol[0] , sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] , sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] , sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] , sat[10], val[10]));

		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));

		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[4], sat[3] =sat[4], val[3] =val[4]));			//2
		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2

		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));
		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[4], sat[19] =sat[4], val[19] =val[4]));


		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[7], sat[6] =sat[7], val[6] =val[7]));			//3
		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3

		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));
		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[7], sat[16] =sat[7], val[16] =val[7]));


		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[10], sat[9] =sat[10], val[9] =val[10]));	//center
		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));
		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[10], sat[13] =sat[10], val[13] =val[10]));
}

///////////////////////////////////////////////////////////////////////////////////////////
	void doub(){
	if (digitalRead(bre) == 0)
	{

		random(0, 2) ? q19 =0 : q19 = 	random(0, 10);
		random(0, 2) ? q18 =0 : q18 = 	random(0, 10);
		random(0, 2) ? q17 =0 : q17 = 	random(0, 10);

		
		// q19 = random(0, 4);
		// q18 = random(0, 4);
		// q17 = random(0, 4);

		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(10 * bar16 + 1);
	}
	w19 = 9;
	while (w19 < 250)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19 -= 2;
	}
	w19 = 0;
	while (w19 < 10)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	strip.show();
	delay(bar16 * bar16 + 1);

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(10 * bar16 + 1);
	}

	w19 = 8;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19 -= 2;
	}

	w19 = 0;
	while (w19 < 10)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}
	void deg()
{
	void chain();
	if (digitalRead(bre) == 0)
		if (r[0] != 255)
			strip.setPixelColor(0, r[0] = h, g[0], b[0]);
	if (digitalRead(bre) == 1)
	{
		if (r[0] >= i9)
			strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
		else
			strip.setPixelColor(0, r[0] = 0, g[0], b[0]);
	}
	if (digitalRead(bgr) == 0)
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] = h, b[0]);
	if (digitalRead(bgr) == 1)
	{
		if (g[0] >= i9)
			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
		else
			strip.setPixelColor(0, r[0], g[0] = 0, b[0]);
	}
	if (digitalRead(bbl) == 0)
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] = h);
	if (digitalRead(bbl) == 1)
	{
		if (b[0] >= i9)
			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
		else
			strip.setPixelColor(0, r[0], g[0], b[0] = 0);
	}

	while (digitalRead(b2) == 0)
	{
		w15 = random(0, 3);
		if (w15 == 0)
		{
			if (r[0] != 255)
				while (r[0] != 255)
				{
					strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
					chain();
				}
			else
				while (r[0] != 0)
				{
					strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
					chain();
				}
		}
		if (w15 == 1)
		{
			if (g[0] != 255)
				while (g[0] != 255)
				{
					strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
					chain();
				}
			else
				while (g[0] != 0)
				{
					strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
					chain();
				}
		}
		if (w15 == 2)
		{
			if (b[0] != 255)
				while (b[0] != 255)
				{
					strip.setPixelColor(0, r[0], g[0], b[0] += i9);
					chain();
				}
			else
				while (b[0] != 0)
				{
					strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
					chain();
				}
		}
	}
	chain();
}
	void pic()
{
	if (i8 >= 7)
		i8 = 0;
	while (i8 < 7)
	{
		i7 = 9;
		while (i7 != 255)
		{ //Serial.println(i8);
			strip.setPixelColor(i7, 0, mozi[i7][i8] * 250, 0);
			i7--;
		}
		i8++;
		delay(bar16 * bar16 + 1);
		strip.show();
	}
}

	void iro8()
{
	uint32_t Wheel(byte WheelPos);
	uint16_t i,j;
	while (digitalRead(bbl) == 0)
	{


	for (j = 0; j < 256 * 1; j++){ // 5 cycles of all colors on wheel
		for (i = 0; i < strip.numPixels(); i++){
						strip.setPixelColor(22 - i, Wheel(((i * 56 / strip.numPixels()) + j) ^ 255));

			// strip.setPixelColor(22 - i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
		}
		strip.show();
		delay(bar16 * bar16);
	}
	}

	while (digitalRead(bgr) == 0){ 


	for (j = 0; j < 256 * 1; j++){ // 5 cycles of all colors on wheel
		for (i = 0; i < strip.numPixels(); i++){
						strip.setPixelColor(22 - i, Wheel(((i * 56 / strip.numPixels()) + j) | 255));

			// strip.setPixelColor(22 - i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
		}
		strip.show();
		delay(bar16 * bar16);
	}
	}

	while (digitalRead(bre) == 0)
	{
	uint32_t Wheel(byte WheelPos);
	uint16_t i,j;

	for (j = 0; j < 256 * 1; j++){ // 5 cycles of all colors on wheel
		for (i = 0; i < strip.numPixels(); i++){
						strip.setPixelColor(22 - i, Wheel(((i * 56 / strip.numPixels()) + j) % 5));

			// strip.setPixelColor(22 - i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
		}
		strip.show();
		delay(bar16 * bar16);
		
	}
	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);
	while (w19 + 1 < 100)
	{
		if (r[w19] > 1)
			if (q19 == 0)
				r[w19] -= 15;
		if (g[w19] > 1)
			if (q18 == 0)
				g[w19] -= 15;
		if (b[w19] > 1)
			if (q17 == 0)
				b[w19] -= 15;
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		w19--;
	}
	strip.show();
	delay(bar16 * bar16 + 1);
}

void hsviro7()
{

	if (digitalRead(bbl) == 0)
	{

			// if(fue1<32) fue1+=pm; else {fue1=0;}
			// rcol[0]=(2048*fue1);

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			// delay(bar16 * bar16 + 1);		

		// strip.setPixelColor(0, strip.ColorHSV(rcol[0] , sat[0], val[0]));
		strip.setPixelColor(0, strip.ColorHSV(rcol[0] = random(0, 64) * 1024, sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] = random(0, 64) * 1024, sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] = random(0, 64) * 1024, sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));




		// strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);			//1
		// strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		// strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		// strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		// strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		// strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		// strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		// strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);			//2
		// strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		// strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		// strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		// strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		// strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);			//3
		// strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		// strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		// strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		// strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		// strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);	//center
		// strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
	}

	while (digitalRead(bbl) == 0)
	{
		strip.show();
	}

	while (digitalRead(bgr) == 0){ 

		(rcol[0]+1024<65535) ? rcol[0] += 1024 : rcol[0] = 0;
		(rcol[4]+1024<65535) ? rcol[4] += 1024 : rcol[4] = 0;
		(rcol[7]+1024<65535) ? rcol[7] += 1024 : rcol[7] = 0;
		(rcol[10]+1024<65535) ? rcol[10] += 1024 : rcol[10] = 0;
		

		// strip.setPixelColor(0, (rcol[0]+1024<65535) ? strip.ColorHSV(rcol[0] += 1024 : strip.ColorHSV(rcol[0] = 0, sat[0], val[0]));

		strip.setPixelColor(0, strip.ColorHSV(rcol[0] , sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] , sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] , sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] , sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));

		strip.show();
		delay(bar16 * bar16 + 1);

	}

	if (digitalRead(bre) == 0)
	{
		strip.setPixelColor(0, strip.ColorHSV(rcol[0] = random(0, 64) * 1024, sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] = random(0, 64) * 1024, sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] = random(0, 64) * 1024, sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));

	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);

	// while (w19 + 1 < 100)
	// {
	// 	if (r[w19] > 1)
	// 		if (q19 == 0)
	// 			r[w19] -= 15;
	// 	if (g[w19] > 1)
	// 		if (q18 == 0)
	// 			g[w19] -= 15;
	// 	if (b[w19] > 1)
	// 		if (q17 == 0)
	// 			b[w19] -= 15;
	// 	strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

	// 	w19--;
	// }


	// while (w19 > 0)
	// {
	// 	rcol[w19] = rcol[w19 - 1];
	// 	sat[w19] = sat[w19 - 1];
	// 	val[w19] = val[w19 - 1];
	// 	// gcol[w19] = gcol[w19 - 1];
	// 	// bcol[w19] = bcol[w19 - 1];

	// 	// r[w19] = r[w19 - 1];
	// 	// g[w19] = g[w19 - 1];
	// 	// b[w19] = b[w19 - 1];
	// 	w19--;
	// }	

	// while (w19 < 23)
	// {
	// 	strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));
	// 	w19++;
	// }


	strip.show();
	delay(bar16 * bar16 + 1);
}

void hsviro8()
{

	if (digitalRead(bbl) == 0)
	{

			// if(fue1<32) fue1+=pm; else {fue1=0;}
			// rcol[0]=(2048*fue1);

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			// delay(bar16 * bar16 + 1);

		val[0]=h;
		val[3]=h;
		val[7]=h;
		val[11]=h;

		strip.setPixelColor(0, strip.ColorHSV(rcol[0] , sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] , sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] , sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] , sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));






		// strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);			//1
		// strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		// strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		// strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		// strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		// strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		// strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		// strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);			//2
		// strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		// strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		// strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		// strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		// strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);			//3
		// strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		// strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		// strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		// strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		// strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);	//center
		// strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
	}

	while (digitalRead(bbl) == 0)
	{
		strip.show();
	}

	while (digitalRead(bgr) == 0){ 

		(rcol[0]+1024<65535) ? rcol[0] += 1024 : rcol[0] = 0;
		(rcol[4]+1024<65535) ? rcol[4] += 1024 : rcol[4] = 0;
		(rcol[7]+1024<65535) ? rcol[7] += 1024 : rcol[7] = 0;
		(rcol[10]+1024<65535) ? rcol[10] += 1024 : rcol[10] = 0;
		

		// strip.setPixelColor(0, (rcol[0]+1024<65535) ? strip.ColorHSV(rcol[0] += 1024 : strip.ColorHSV(rcol[0] = 0, sat[0], val[0]));

		strip.setPixelColor(0, strip.ColorHSV(rcol[0] , sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] , sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] , sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] , sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));

		strip.show();
		delay(bar16 * bar16 + 1);

	}

	if (digitalRead(bre) == 0)
	{
		strip.setPixelColor(0, strip.ColorHSV(rcol[0] = random(0, 64) * 1024, sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] = random(0, 64) * 1024, sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] = random(0, 64) * 1024, sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));

				delay(bar16 * bar16 + 1);

	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1 && digitalRead(b1) == 1 && digitalRead(b2) == 1 && digitalRead(b3) == 1){
		w19 = 0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],(val[w19]>0) ? val[w19]-=1 : val[w19]));
			w19++;
		}
	}
	// while (w19 + 1 < 100)
	// {
	// 	if (r[w19] > 1)
	// 		if (q19 == 0)
	// 			r[w19] -= 15;
	// 	if (g[w19] > 1)
	// 		if (q18 == 0)
	// 			g[w19] -= 15;
	// 	if (b[w19] > 1)
	// 		if (q17 == 0)
	// 			b[w19] -= 15;
	// 	strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

	// 	w19--;
	// }


	// while (w19 > 0)
	// {
	// 	// rcol[w19] -= 1;
	// 	// sat[w19] -= 1;
	// 	val[w19] -= 1;

	// 	// rcol[w19] = rcol[w19 - 1];
	// 	// sat[w19] = sat[w19 - 1];
	// 	// val[w19] = val[w19 - 1];

	// 	// gcol[w19] = gcol[w19 - 1];
	// 	// bcol[w19] = bcol[w19 - 1];

	// 	// r[w19] = r[w19 - 1];
	// 	// g[w19] = g[w19 - 1];
	// 	// b[w19] = b[w19 - 1];
	// 	w19--;
	// }	

	// while (w19 < 23)
	// {
	// 	strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));
	// 	w19++;
	// }


	strip.show();
	delay(bar16 * bar16 + 1);
}

void hsviro8a()
{

	if (digitalRead(bre) == 0)
	{

			// if(fue1<32) fue1+=pm; else {fue1=0;}
			// rcol[0]=(2048*fue1);

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			// delay(bar16 * bar16 + 1);
		(val[0]+Vval<255) ? val[0] += Vval : val[0] ;
		(val[4]+Vval<255) ? val[4] += Vval : val[4] ;
		(val[7]+Vval<255) ? val[7] += Vval : val[7] ;
		(val[10]+Vval<255) ? val[10] += Vval : val[10] ;

		// val[0]=h;		val[4]=h;		val[7]=h;		val[10]=h;

		copy();

	}

	// while (digitalRead(bbl) == 0)
	// {
	// 	strip.show();
	// }

	if (digitalRead(bgr) == 0){ 

		(rcol[0]+Vcol<65535) ? rcol[0] += Vcol : rcol[0] = 0;
		(rcol[4]+Vcol<65535) ? rcol[4] += Vcol : rcol[4] = 0;
		(rcol[7]+Vcol<65535) ? rcol[7] += Vcol : rcol[7] = 0;
		(rcol[10]+Vcol<65535) ? rcol[10] += Vcol : rcol[10] = 0;		

		copy();

	}

	if (digitalRead(bbl) == 0)
	{
		rcol[0] = random(0, 64) * 1024;
		rcol[4] = random(0, 64) * 1024;
		rcol[7] = random(0, 64) * 1024;
		rcol[10] = random(0, 64) * 1024;

		val[0]=h;		val[4]=h;		val[7]=h;		val[10]=h;

		// strip.setPixelColor(4, strip.ColorHSV(rcol[4] = random(0, 64) * 1024, sat[4], val[4]));
		// strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		// strip.setPixelColor(10, strip.ColorHSV(rcol[10] = random(0, 64) * 1024, sat[10], val[10]));

		copy();

				delay(bar16 *bar16 * 10+1);

	}

		while (digitalRead(bbl) == 0)	{
			strip.show();
		}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);

	// if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1 && digitalRead(b1) == 1 && digitalRead(b2) == 1 && digitalRead(b3) == 1){
	if (1){
		w19 = 0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],(val[w19]>0) ? val[w19]-=1 : val[w19]));
			w19++;
		}
	}
	// while (w19 + 1 < 100)
	// {
	// 	if (r[w19] > 1)
	// 		if (q19 == 0)
	// 			r[w19] -= 15;
	// 	if (g[w19] > 1)
	// 		if (q18 == 0)
	// 			g[w19] -= 15;
	// 	if (b[w19] > 1)
	// 		if (q17 == 0)
	// 			b[w19] -= 15;
	// 	strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

	// 	w19--;
	// }


	// while (w19 > 0)
	// {
	// 	// rcol[w19] -= 1;
	// 	// sat[w19] -= 1;
	// 	val[w19] -= 1;

	// 	// rcol[w19] = rcol[w19 - 1];
	// 	// sat[w19] = sat[w19 - 1];
	// 	// val[w19] = val[w19 - 1];

	// 	// gcol[w19] = gcol[w19 - 1];
	// 	// bcol[w19] = bcol[w19 - 1];

	// 	// r[w19] = r[w19 - 1];
	// 	// g[w19] = g[w19 - 1];
	// 	// b[w19] = b[w19 - 1];
	// 	w19--;
	// }	

	// while (w19 < 23)
	// {
	// 	strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));
	// 	w19++;
	// }


	strip.show();
	delay(bar16 * bar16 + 1);
}

void hsviro8s()
{

	if (digitalRead(bbl) == 0)
	{
		rcol[0] = random(0, 64+1) * 1024-1;
		rcol[4] = random(0, 64+1) * 1024-1;
		rcol[7] = random(0, 64+1) * 1024-1;
		rcol[10] = random(0, 64+1) * 1024-1;

			// if(fue1<32) fue1+=pm; else {fue1=0;}
			// rcol[0]=(2048*fue1);

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			// delay(bar16 * bar16 + 1);
		(sat[0]+Vsat<=255) ? sat[0] += Vsat : sat[0] ;
		(sat[4]+Vsat<=255) ? sat[4] += Vsat : sat[4] ;
		(sat[7]+Vsat<=255) ? sat[7] += Vsat : sat[7] ;
		(sat[10]+Vsat<=255) ? sat[10] += Vsat : sat[10] ;

		(val[0]+Vval<=255) ? val[0] += Vval : val[0] ;
		(val[4]+Vval<=255) ? val[4] += Vval : val[4] ;
		(val[7]+Vval<=255) ? val[7] += Vval : val[7] ;
		(val[10]+Vval<=255) ? val[10] += Vval : val[10] ;

		// val[0]=h;		val[4]=h;		val[7]=h;		val[10]=h;

		copy();

	}

	// while (digitalRead(bbl) == 0)
	// {
	// 	strip.show();
	// }

	if (digitalRead(bgr) == 0){ 

		(rcol[0]+Vcol<=65535) ? rcol[0] += Vcol : rcol[0] = 0;
		(rcol[4]+Vcol<=65535) ? rcol[4] += Vcol : rcol[4] = 0;
		(rcol[7]+Vcol<=65535) ? rcol[7] += Vcol : rcol[7] = 0;
		(rcol[10]+Vcol<=65535) ? rcol[10] += Vcol : rcol[10] = 0;		


		(sat[0]+Vsat<=255) ? sat[0] += Vsat : sat[0] ;
		(sat[4]+Vsat<=255) ? sat[4] += Vsat : sat[4] ;
		(sat[7]+Vsat<=255) ? sat[7] += Vsat : sat[7] ;
		(sat[10]+Vsat<=255) ? sat[10] += Vsat : sat[10] ;

		(val[0]+Vval<=255) ? val[0] += Vval : val[0] ;
		(val[4]+Vval<=255) ? val[4] += Vval : val[4] ;
		(val[7]+Vval<=255) ? val[7] += Vval : val[7] ;
		(val[10]+Vval<=255) ? val[10] += Vval : val[10] ;

		copy();

	}

	if (digitalRead(bre) == 0)
	{
		rcol[0] = random(0, 64+1) * 1024-1;
		rcol[4] = random(0, 64+1) * 1024-1;
		rcol[7] = random(0, 64+1) * 1024-1;
		rcol[10] = random(0, 64+1) * 1024-1;

		sat[0]=h;		sat[4]=h;		sat[7]=h;		sat[10]=h;
		val[0]=h;		val[4]=h;		val[7]=h;		val[10]=h;

		// strip.setPixelColor(4, strip.ColorHSV(rcol[4] = random(0, 64) * 1024, sat[4], val[4]));
		// strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		// strip.setPixelColor(10, strip.ColorHSV(rcol[10] = random(0, 64) * 1024, sat[10], val[10]));

		copy();

				// delay(bar16 *bar16 * 10+1);

	}

		while (digitalRead(bre) == 0)	{
			strip.show();
		}

	while (digitalRead(b1) == 0)	{ 
		if(isB1==true){
			(Vcol<2048) ? Vcol*=1.5 : Vcol = 64;
			// (Vsat<h) ? Vsat+=1 : Vsat;
			// (Vval<h) ? Vval+=1 : Vval;
			isB1=false;
		}		
	}
	isB1=true;

	while (digitalRead(b2) == 0)	{ 
		if(isB2==true){
			(Vcol>64) ? Vcol*=0.8 : Vcol;
			// (Vsat>1) ? Vsat-=1 : Vsat;
			// (Vval>1) ? Vval-=1 : Vval;
			isB1=false;
		}		
	}
	isB2=true;

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);

	// if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1 && digitalRead(b1) == 1 && digitalRead(b2) == 1 && digitalRead(b3) == 1){
		w19 = 0;
		while (w19 < 23)
		{
			// if(random(0, 2))
			if(digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1 && digitalRead(b1) == 1 && digitalRead(b2) == 1 )
			{
				strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],
				// (sat[w19]-Vsat>0) ? sat[w19]-=Vsat : sat[w19],
				sat[w19],
				(val[w19]-Vval>vr2255) ? val[w19]-=Vval : val[w19]));
				// (sat[w19]>0) ? sat[w19]-=1 : sat[w19],
				// (val[w19]>vr2255) ? val[w19]-=1 : val[w19]));
			}
			w19++;
		}

	// 	w19 = 22;
	// q19 = random(0, 2);
	// q18 = random(0, 2);
	// q17 = random(0, 2);
	// while (w19 + 1 < 100)
	// {
	// 	if (r[w19] > 1)
	// 		if (q19 == 0)
	// 			r[w19] -= 15;
	// 	if (g[w19] > 1)
	// 		if (q18 == 0)
	// 			g[w19] -= 15;
	// 	if (b[w19] > 1)
	// 		if (q17 == 0)
	// 			b[w19] -= 15;
	// 	strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

	// 	w19--;
	// }

	// while (w19 + 1 < 100)
	// {
	// 	if (r[w19] > 1)
	// 		if (q19 == 0)
	// 			r[w19] -= 15;
	// 	if (g[w19] > 1)
	// 		if (q18 == 0)
	// 			g[w19] -= 15;
	// 	if (b[w19] > 1)
	// 		if (q17 == 0)
	// 			b[w19] -= 15;
	// 	strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

	// 	w19--;
	// }


	// while (w19 > 0)
	// {
	// 	// rcol[w19] -= 1;
	// 	// sat[w19] -= 1;
	// 	val[w19] -= 1;

	// 	// rcol[w19] = rcol[w19 - 1];
	// 	// sat[w19] = sat[w19 - 1];
	// 	// val[w19] = val[w19 - 1];

	// 	// gcol[w19] = gcol[w19 - 1];
	// 	// bcol[w19] = bcol[w19 - 1];

	// 	// r[w19] = r[w19 - 1];
	// 	// g[w19] = g[w19 - 1];
	// 	// b[w19] = b[w19 - 1];
	// 	w19--;
	// }	

	// while (w19 < 23)
	// {
	// 	strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));
	// 	w19++;
	// }


	strip.show();
	delay(bar16 * bar16 + 1);
}

	void hsviro9()
{

	if (digitalRead(bbl) == 0)
	{

			// if(fue1<32) fue1+=pm; else {fue1=0;}
			// rcol[0]=(2048*fue1);

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			// delay(bar16 * bar16 + 1);		

		strip.setPixelColor(0, strip.ColorHSV(rcol[0] = random(0, 64) * 1024, sat[0], val[0]));
		// strip.setPixelColor(3, strip.ColorHSV(rcol[3] = random(0, 64) * 1024, sat[3], val[3]));
		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = random(0, 64) * 1024, sat[8], val[8]));
		// strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		// strip.setPixelColor(11, strip.ColorHSV(rcol[11] = random(0, 64) * 1024, sat[11], val[11]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1 , strip.ColorHSV(rcol[1] = rcol[0], sat[1]   = sat[0], val[1] = val[0]));			//1
		strip.setPixelColor(2 , strip.ColorHSV(rcol[2] = rcol[0], sat[2]   = sat[0], val[2] = val[0]));			//1
		strip.setPixelColor(3 , strip.ColorHSV(rcol[3] = rcol[0], sat[3]   = sat[0], val[3] = val[0]));			//1
		strip.setPixelColor(4 , strip.ColorHSV(rcol[4]  = rcol[0], sat[4]  = sat[0], val[4] = val[0]));
		strip.setPixelColor(5 , strip.ColorHSV(rcol[5]  = rcol[0], sat[5]  = sat[0], val[5] = val[0]));
		strip.setPixelColor(6 , strip.ColorHSV(rcol[6]  = rcol[0], sat[6]  = sat[0], val[6] = val[0]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[0], sat[16] = sat[0], val[16] = val[0]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[0], sat[17] = sat[0], val[17] = val[0]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[0], sat[18] = sat[0], val[18] = val[0]));
		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] = sat[0], val[19] = val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] = sat[0], val[20] = val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] = sat[0], val[21] = val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] = sat[0], val[22] = val[0]));


		strip.setPixelColor(7 , strip.ColorHSV(rcol[7]  = rcol[8], sat[7]  = sat[8], val[7] = val[8]));		
		strip.setPixelColor(9 , strip.ColorHSV(rcol[9]  = rcol[8], sat[9]  = sat[8], val[9] =  val[8]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] = rcol[8], sat[10] = sat[8], val[10] = val[8]));
		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[8], sat[11] = sat[8], val[11] = val[8]));
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[8], sat[12] = sat[8], val[12] = val[8]));
		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[8], sat[13] = sat[8], val[13] = val[8]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[8], sat[14] = sat[8], val[14] = val[8]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[8], sat[15] = sat[8], val[15] = val[8]));






		// strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);			//1
		// strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		// strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		// strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		// strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		// strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		// strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		// strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);			//2
		// strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		// strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		// strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		// strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		// strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);			//3
		// strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		// strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		// strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		// strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		// strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);	//center
		// strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
	}

	while (digitalRead(bbl) == 0)
	{
		strip.show();
	}

	while (digitalRead(bgr) == 0){ 

		(rcol[0]+1024<65535) ? rcol[0] += 1024 : rcol[0] = 0;
		(rcol[8]+1024<65535) ? rcol[8] += 1024 : rcol[8] = 0;
		// (rcol[4]+1024<65535) ? rcol[4] += 1024 : rcol[4] = 0;
		// (rcol[7]+1024<65535) ? rcol[7] += 1024 : rcol[7] = 0;
		// (rcol[10]+1024<65535) ? rcol[10] += 1024 : rcol[10] = 0;
		

		// strip.setPixelColor(0, (rcol[0]+1024<65535) ? strip.ColorHSV(rcol[0] += 1024 : strip.ColorHSV(rcol[0] = 0, sat[0], val[0]));

		strip.setPixelColor(1 , strip.ColorHSV(rcol[1] = rcol[0], sat[1]   = sat[0], val[1] = val[0]));			//1
		strip.setPixelColor(2 , strip.ColorHSV(rcol[2] = rcol[0], sat[2]   = sat[0], val[2] = val[0]));			//1
		strip.setPixelColor(3 , strip.ColorHSV(rcol[3] = rcol[0], sat[3]   = sat[0], val[3] = val[0]));			//1
		strip.setPixelColor(4 , strip.ColorHSV(rcol[4]  = rcol[0], sat[4]  = sat[0], val[4] = val[0]));
		strip.setPixelColor(5 , strip.ColorHSV(rcol[5]  = rcol[0], sat[5]  = sat[0], val[5] = val[0]));
		strip.setPixelColor(6 , strip.ColorHSV(rcol[6]  = rcol[0], sat[6]  = sat[0], val[6] = val[0]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[0], sat[16] = sat[0], val[16] = val[0]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[0], sat[17] = sat[0], val[17] = val[0]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[0], sat[18] = sat[0], val[18] = val[0]));
		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] = sat[0], val[19] = val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] = sat[0], val[20] = val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] = sat[0], val[21] = val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] = sat[0], val[22] = val[0]));


		strip.setPixelColor(7 , strip.ColorHSV(rcol[7]  = rcol[8], sat[7]  = sat[8], val[7] = val[8]));		
		strip.setPixelColor(9 , strip.ColorHSV(rcol[9]  = rcol[8], sat[9]  = sat[8], val[9] =  val[8]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] = rcol[8], sat[10] = sat[8], val[10] = val[8]));
		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[8], sat[11] = sat[8], val[11] = val[8]));
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[8], sat[12] = sat[8], val[12] = val[8]));
		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[8], sat[13] = sat[8], val[13] = val[8]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[8], sat[14] = sat[8], val[14] = val[8]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[8], sat[15] = sat[8], val[15] = val[8]));



		strip.show();
		delay(bar16 * bar16 + 1);

	}

	if (digitalRead(bre) == 0)
	{
		strip.setPixelColor(0, strip.ColorHSV(rcol[0] = random(0, 64) * 1024, sat[0], val[0]));
		strip.setPixelColor(4, strip.ColorHSV(rcol[4] = random(0, 64) * 1024, sat[4], val[4]));
		strip.setPixelColor(7, strip.ColorHSV(rcol[7] = random(0, 64) * 1024, sat[7], val[7]));
		strip.setPixelColor(10, strip.ColorHSV(rcol[10] = random(0, 64) * 1024, sat[10], val[10]));


		// strip.setPixelColor(4, rcol[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		// strip.setPixelColor(7, rcol[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		// strip.setPixelColor(10, rcol[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);

		strip.setPixelColor(1, strip.ColorHSV(rcol[1] = rcol[0], sat[1] =sat[0], val[1] =val[0]));			//1
		strip.setPixelColor(2, strip.ColorHSV(rcol[2] = rcol[0], sat[2] =sat[0], val[2] =val[0]));
		strip.setPixelColor(3, strip.ColorHSV(rcol[3] = rcol[0], sat[3] =sat[0], val[3] =val[0]));

		strip.setPixelColor(19, strip.ColorHSV(rcol[19] = rcol[0], sat[19] =sat[0], val[19] =val[0]));
		strip.setPixelColor(20, strip.ColorHSV(rcol[20] = rcol[0], sat[20] =sat[0], val[20] =val[0]));
		strip.setPixelColor(21, strip.ColorHSV(rcol[21] = rcol[0], sat[21] =sat[0], val[21] =val[0]));
		strip.setPixelColor(22, strip.ColorHSV(rcol[22] = rcol[0], sat[22] =sat[0], val[22] =val[0]));


		strip.setPixelColor(5, strip.ColorHSV(rcol[5] = rcol[4], sat[5] =sat[4], val[5] =val[4]));			//2
		strip.setPixelColor(6, strip.ColorHSV(rcol[6] = rcol[4], sat[6] =sat[4], val[6] =val[4]));

		strip.setPixelColor(16, strip.ColorHSV(rcol[16] = rcol[4], sat[16] =sat[4], val[16] =val[4]));
		strip.setPixelColor(17, strip.ColorHSV(rcol[17] = rcol[4], sat[17] =sat[4], val[17] =val[4]));
		strip.setPixelColor(18, strip.ColorHSV(rcol[18] = rcol[4], sat[18] =sat[4], val[18] =val[4]));


		strip.setPixelColor(8, strip.ColorHSV(rcol[8] = rcol[7], sat[8] =sat[7], val[8] =val[7]));			//3
		strip.setPixelColor(9, strip.ColorHSV(rcol[9] = rcol[7], sat[9] =sat[7], val[9] =val[7]));

		strip.setPixelColor(13, strip.ColorHSV(rcol[13] = rcol[7], sat[13] =sat[7], val[13] =val[7]));
		strip.setPixelColor(14, strip.ColorHSV(rcol[14] = rcol[7], sat[14] =sat[7], val[14] =val[7]));
		strip.setPixelColor(15, strip.ColorHSV(rcol[15] = rcol[7], sat[15] =sat[7], val[15] =val[7]));


		strip.setPixelColor(11, strip.ColorHSV(rcol[11] = rcol[10], sat[11] =sat[10], val[11] =val[10]));	//center
		strip.setPixelColor(12, strip.ColorHSV(rcol[12] = rcol[10], sat[12] =sat[10], val[12] =val[10]));

	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);

	// while (w19 + 1 < 100)
	// {
	// 	if (r[w19] > 1)
	// 		if (q19 == 0)
	// 			r[w19] -= 15;
	// 	if (g[w19] > 1)
	// 		if (q18 == 0)
	// 			g[w19] -= 15;
	// 	if (b[w19] > 1)
	// 		if (q17 == 0)
	// 			b[w19] -= 15;
	// 	strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

	// 	w19--;
	// }


	// while (w19 > 0)
	// {
	// 	rcol[w19] = rcol[w19 - 1];
	// 	sat[w19] = sat[w19 - 1];
	// 	val[w19] = val[w19 - 1];
	// 	// gcol[w19] = gcol[w19 - 1];
	// 	// bcol[w19] = bcol[w19 - 1];

	// 	// r[w19] = r[w19 - 1];
	// 	// g[w19] = g[w19 - 1];
	// 	// b[w19] = b[w19 - 1];
	// 	w19--;
	// }	

	// while (w19 < 23)
	// {
	// 	strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));
	// 	w19++;
	// }


	strip.show();
	delay(bar16 * bar16 + 1);
}

void iro6()
{

	if (digitalRead(bre) == 0)
	{
		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		strip.setPixelColor(7, r[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);
		strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);
		strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
	}

	while (digitalRead(bre) == 0)
	{
		strip.show();
	}

	if (digitalRead(bgr) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		//       strip.setPixelColor(0,h,h,h);
		//       strip.setPixelColor(1,h,h,h);
		//       strip.setPixelColor(2,h,h,h);
		//       strip.setPixelColor(3,h,0,0);
		//       strip.setPixelColor(4,h,0,0);
		//       strip.setPixelColor(5,h,0,0);
		//       strip.setPixelColor(6,h,0,0);
		//       strip.setPixelColor(7,h,h,h);
		//       strip.setPixelColor(8,h,h,h);
		//       strip.setPixelColor(9,h,h,h);

		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(1, r[1] = random(0, 17) * 15, g[1] = random(0, 17) * 15, b[1] = random(0, 17) * 15);
		strip.setPixelColor(2, r[2] = random(0, 17) * 15, g[2] = random(0, 17) * 15, b[2] = random(0, 17) * 15);
		strip.setPixelColor(3, r[3] = random(0, 17) * 15, g[3] = random(0, 17) * 15, b[3] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		strip.setPixelColor(5, r[5] = random(0, 17) * 15, g[5] = random(0, 17) * 15, b[5] = random(0, 17) * 15);
		strip.setPixelColor(6, r[6] = random(0, 17) * 15, g[6] = random(0, 17) * 15, b[6] = random(0, 17) * 15);
		strip.setPixelColor(7, r[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		strip.setPixelColor(8, r[8] = random(0, 17) * 15, g[8] = random(0, 17) * 15, b[8] = random(0, 17) * 15);
		strip.setPixelColor(9, r[9] = random(0, 17) * 15, g[9] = random(0, 17) * 15, b[9] = random(0, 17) * 15);
		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);
		strip.setPixelColor(11, r[11] = random(0, 17) * 15, g[11] = random(0, 17) * 15, b[11] = random(0, 17) * 15);
		strip.setPixelColor(12, r[12] = random(0, 17) * 15, g[12] = random(0, 17) * 15, b[12] = random(0, 17) * 15);
		strip.setPixelColor(13, r[13] = random(0, 17) * 15, g[13] = random(0, 17) * 15, b[13] = random(0, 17) * 15);
		strip.setPixelColor(14, r[14] = random(0, 17) * 15, g[14] = random(0, 17) * 15, b[14] = random(0, 17) * 15);
		strip.setPixelColor(15, r[15] = random(0, 17) * 15, g[15] = random(0, 17) * 15, b[15] = random(0, 17) * 15);
		strip.setPixelColor(16, r[16] = random(0, 17) * 15, g[16] = random(0, 17) * 15, b[16] = random(0, 17) * 15);
		strip.setPixelColor(17, r[17] = random(0, 17) * 15, g[17] = random(0, 17) * 15, b[17] = random(0, 17) * 15);
		strip.setPixelColor(18, r[18] = random(0, 17) * 15, g[18] = random(0, 17) * 15, b[18] = random(0, 17) * 15);
		strip.setPixelColor(19, r[19] = random(0, 17) * 15, g[19] = random(0, 17) * 15, b[19] = random(0, 17) * 15);
		strip.setPixelColor(20, r[20] = random(0, 17) * 15, g[20] = random(0, 17) * 15, b[20] = random(0, 17) * 15);
		strip.setPixelColor(21, r[21] = random(0, 17) * 15, g[21] = random(0, 17) * 15, b[21] = random(0, 17) * 15);
		strip.setPixelColor(22, r[22] = random(0, 17) * 15, g[22] = random(0, 17) * 15, b[22] = random(0, 17) * 15);

		// strip.show();//delay(bar16*bar16+1);
	}

	while (digitalRead(bgr) == 0)
	{
		strip.show();
	}

	while (digitalRead(bbl) == 0)
	{
		//q19=random(0,4);q18=random(0,4);q17=random(0,4);

		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		strip.setPixelColor(7, r[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);
		strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);
		strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);

		strip.show();
		delay(bar16 * bar16 * bar16 + 1);
	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);
	while (w19 + 1 < 100)
	{
		if (r[w19] > 1)
			if (q19 == 0)
				r[w19] -= 15;
		if (g[w19] > 1)
			if (q18 == 0)
				g[w19] -= 15;
		if (b[w19] > 1)
			if (q17 == 0)
				b[w19] -= 15;
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		w19--;
	}
	strip.show();
	delay(bar16 * bar16 + 1);
}

	void iro4()
{

	if (digitalRead(bbl) != 0)
	{

		strip.setPixelColor(0, 0, 0, 0);
		strip.setPixelColor(1, 0, 0, 0);
		strip.setPixelColor(2, 0, 0, 0);
		strip.setPixelColor(3, 0, 0, 0);
		strip.setPixelColor(4, 0, 0, 0);
		strip.setPixelColor(5, 0, 0, 0);
		strip.setPixelColor(6, 0, 0, 0);
		strip.setPixelColor(7, 0, 0, 0);
		strip.setPixelColor(8, 0, 0, 0);
		strip.setPixelColor(9, 0, 0, 0);
		strip.setPixelColor(10, 0, 0, 0);
		strip.setPixelColor(11, 0, 0, 0);
		strip.setPixelColor(12, 0, 0, 0);
		strip.setPixelColor(13, 0, 0, 0);
		strip.setPixelColor(14, 0, 0, 0);
		strip.setPixelColor(15, 0, 0, 0);
		strip.setPixelColor(16, 0, 0, 0);
		strip.setPixelColor(17, 0, 0, 0);
		strip.setPixelColor(18, 0, 0, 0);
		strip.setPixelColor(19, 0, 0, 0);
		strip.setPixelColor(20, 0, 0, 0);
		strip.setPixelColor(21, 0, 0, 0);
		strip.setPixelColor(22, 0, 0, 0);
	}

	if (digitalRead(bbl) == 0)
	{
		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		strip.setPixelColor(7, r[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);
		strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);
		strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
	}

	while (digitalRead(bbl) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);

		strip.show(); //delay(bar16*bar16+1);
	}

	if (digitalRead(bgr) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		//       strip.setPixelColor(0,h,h,h);
		//       strip.setPixelColor(1,h,h,h);
		//       strip.setPixelColor(2,h,h,h);
		//       strip.setPixelColor(3,h,0,0);
		//       strip.setPixelColor(4,h,0,0);
		//       strip.setPixelColor(5,h,0,0);
		//       strip.setPixelColor(6,h,0,0);
		//       strip.setPixelColor(7,h,h,h);
		//       strip.setPixelColor(8,h,h,h);
		//       strip.setPixelColor(9,h,h,h);

		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(1, r[1] = random(0, 17) * 15, g[1] = random(0, 17) * 15, b[1] = random(0, 17) * 15);
		strip.setPixelColor(2, r[2] = random(0, 17) * 15, g[2] = random(0, 17) * 15, b[2] = random(0, 17) * 15);
		strip.setPixelColor(3, r[3] = random(0, 17) * 15, g[3] = random(0, 17) * 15, b[3] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		strip.setPixelColor(5, r[5] = random(0, 17) * 15, g[5] = random(0, 17) * 15, b[5] = random(0, 17) * 15);
		strip.setPixelColor(6, r[6] = random(0, 17) * 15, g[6] = random(0, 17) * 15, b[6] = random(0, 17) * 15);
		strip.setPixelColor(7, r[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		strip.setPixelColor(8, r[8] = random(0, 17) * 15, g[8] = random(0, 17) * 15, b[8] = random(0, 17) * 15);
		strip.setPixelColor(9, r[9] = random(0, 17) * 15, g[9] = random(0, 17) * 15, b[9] = random(0, 17) * 15);
		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);
		strip.setPixelColor(11, r[11] = random(0, 17) * 15, g[11] = random(0, 17) * 15, b[11] = random(0, 17) * 15);
		strip.setPixelColor(12, r[12] = random(0, 17) * 15, g[12] = random(0, 17) * 15, b[12] = random(0, 17) * 15);
		strip.setPixelColor(13, r[13] = random(0, 17) * 15, g[13] = random(0, 17) * 15, b[13] = random(0, 17) * 15);
		strip.setPixelColor(14, r[14] = random(0, 17) * 15, g[14] = random(0, 17) * 15, b[14] = random(0, 17) * 15);
		strip.setPixelColor(15, r[15] = random(0, 17) * 15, g[15] = random(0, 17) * 15, b[15] = random(0, 17) * 15);
		strip.setPixelColor(16, r[16] = random(0, 17) * 15, g[16] = random(0, 17) * 15, b[16] = random(0, 17) * 15);
		strip.setPixelColor(17, r[17] = random(0, 17) * 15, g[17] = random(0, 17) * 15, b[17] = random(0, 17) * 15);
		strip.setPixelColor(18, r[18] = random(0, 17) * 15, g[18] = random(0, 17) * 15, b[18] = random(0, 17) * 15);
		strip.setPixelColor(19, r[19] = random(0, 17) * 15, g[19] = random(0, 17) * 15, b[19] = random(0, 17) * 15);
		strip.setPixelColor(20, r[20] = random(0, 17) * 15, g[20] = random(0, 17) * 15, b[20] = random(0, 17) * 15);
		strip.setPixelColor(21, r[21] = random(0, 17) * 15, g[21] = random(0, 17) * 15, b[21] = random(0, 17) * 15);
		strip.setPixelColor(22, r[22] = random(0, 17) * 15, g[22] = random(0, 17) * 15, b[22] = random(0, 17) * 15);

		while (digitalRead(bgr) == 0)
		{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);

			strip.show(); //delay(bar16*bar16+1);
		}

		// strip.show();//delay(bar16*bar16+1);
	}

	while (digitalRead(bre) == 0)
	{
		//q19=random(0,4);q18=random(0,4);q17=random(0,4);

		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		strip.setPixelColor(7, r[7] = random(0, 17) * 15, g[7] = random(0, 17) * 15, b[7] = random(0, 17) * 15);
		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);
		strip.setPixelColor(6, r[6] = r[4], g[6] = g[4], b[6] = b[4]);
		strip.setPixelColor(16, r[16] = r[4], g[16] = g[4], b[16] = b[4]);
		strip.setPixelColor(17, r[17] = r[4], g[17] = g[4], b[17] = b[4]);
		strip.setPixelColor(18, r[18] = r[4], g[18] = g[4], b[18] = b[4]);

		strip.setPixelColor(8, r[8] = r[7], g[8] = g[7], b[8] = b[7]);
		strip.setPixelColor(9, r[9] = r[7], g[9] = g[7], b[9] = b[7]);
		strip.setPixelColor(13, r[13] = r[7], g[13] = g[7], b[13] = b[7]);
		strip.setPixelColor(14, r[14] = r[7], g[14] = g[7], b[14] = b[7]);
		strip.setPixelColor(15, r[15] = r[7], g[15] = g[7], b[15] = b[7]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);

		strip.show();
		delay(bar16 * bar16 * bar16 + 1);
	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}
}

	void iro5()
{

	if (digitalRead(bbl) != 0)
	{

		strip.setPixelColor(0, 0, 0, 0);
		strip.setPixelColor(1, 0, 0, 0);
		strip.setPixelColor(2, 0, 0, 0);
		strip.setPixelColor(3, 0, 0, 0);
		strip.setPixelColor(4, 0, 0, 0);
		strip.setPixelColor(5, 0, 0, 0);
		strip.setPixelColor(6, 0, 0, 0);
		strip.setPixelColor(7, 0, 0, 0);
		strip.setPixelColor(8, 0, 0, 0);
		strip.setPixelColor(9, 0, 0, 0);
		strip.setPixelColor(10, 0, 0, 0);
		strip.setPixelColor(11, 0, 0, 0);
		strip.setPixelColor(12, 0, 0, 0);
		strip.setPixelColor(13, 0, 0, 0);
		strip.setPixelColor(14, 0, 0, 0);
		strip.setPixelColor(15, 0, 0, 0);
		strip.setPixelColor(16, 0, 0, 0);
		strip.setPixelColor(17, 0, 0, 0);
		strip.setPixelColor(18, 0, 0, 0);
		strip.setPixelColor(19, 0, 0, 0);
		strip.setPixelColor(20, 0, 0, 0);
		strip.setPixelColor(21, 0, 0, 0);
		strip.setPixelColor(22, 0, 0, 0);
	}

	if (digitalRead(bbl) == 0)
	{
		strip.setPixelColor(0, r[0] = h, g[0] = h, b[0] = h);

		strip.setPixelColor(10, r[10] = random(0, 17) * 15, g[10] = random(0, 17) * 15, b[10] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(4, r[4] = r[0], g[4] = g[0], b[4] = b[0]);
		strip.setPixelColor(5, r[5] = r[0], g[5] = g[0], b[5] = b[0]);
		strip.setPixelColor(6, r[6] = r[0], g[6] = g[0], b[6] = b[0]);
		//     strip.setPixelColor(7,r[7]=r[0],g[7]=g[0],b[7]=b[0]);
		//      strip.setPixelColor(8,r[8]=r[0],g[8]=g[0],b[8]=b[0]);
		//      strip.setPixelColor(9,r[9]=r[0],g[9]=g[0],b[9]=b[0]);
		//      strip.setPixelColor(13,r[13]=r[0],g[13]=g[0],b[13]=b[0]);
		//      strip.setPixelColor(14,r[14]=r[0],g[14]=g[0],b[14]=b[0]);
		//    strip.setPixelColor(15,r[15]=r[0],g[15]=g[0],b[15]=b[0]);
		strip.setPixelColor(16, r[16] = r[0], g[16] = g[0], b[16] = b[0]);
		strip.setPixelColor(17, r[17] = r[0], g[17] = g[0], b[17] = b[0]);
		strip.setPixelColor(18, r[18] = r[0], g[18] = g[0], b[18] = b[0]);
		strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		strip.setPixelColor(7, r[7] = r[10], g[7] = g[10], b[7] = b[10]);
		strip.setPixelColor(8, r[8] = r[10], g[8] = g[10], b[8] = b[10]);
		strip.setPixelColor(9, r[9] = r[10], g[9] = g[10], b[9] = b[10]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
		strip.setPixelColor(13, r[13] = r[10], g[13] = g[10], b[13] = b[10]);
		strip.setPixelColor(14, r[14] = r[10], g[14] = g[10], b[14] = b[10]);
		strip.setPixelColor(15, r[15] = r[10], g[15] = g[10], b[15] = b[10]);
	}

	while (digitalRead(bbl) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);

		strip.show(); //delay(bar16*bar16+1);
	}

	if (digitalRead(bgr) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		strip.setPixelColor(10, r[10] = h, g[10] = h, b[10] = h);

		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(4, r[4] = r[0], g[4] = g[0], b[4] = b[0]);
		strip.setPixelColor(5, r[5] = r[0], g[5] = g[0], b[5] = b[0]);
		strip.setPixelColor(6, r[6] = r[0], g[6] = g[0], b[6] = b[0]);
		strip.setPixelColor(7, r[7] = r[0], g[7] = g[0], b[7] = b[0]);
		strip.setPixelColor(8, r[8] = r[0], g[8] = g[0], b[8] = b[0]);
		strip.setPixelColor(9, r[9] = r[0], g[9] = g[0], b[9] = b[0]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
		strip.setPixelColor(13, r[13] = r[10], g[13] = g[10], b[13] = b[10]);
		strip.setPixelColor(14, r[14] = r[10], g[14] = g[10], b[14] = b[10]);
		strip.setPixelColor(15, r[15] = r[10], g[15] = g[10], b[15] = b[10]);
		strip.setPixelColor(16, r[16] = r[10], g[16] = g[10], b[16] = b[10]);
		strip.setPixelColor(17, r[17] = r[10], g[17] = g[10], b[17] = b[10]);
		strip.setPixelColor(18, r[18] = r[10], g[18] = g[10], b[18] = b[10]);
		strip.setPixelColor(19, r[19] = r[10], g[19] = g[10], b[19] = b[10]);
		strip.setPixelColor(20, r[20] = r[10], g[20] = g[10], b[20] = b[10]);
		strip.setPixelColor(21, r[21] = r[10], g[21] = g[10], b[21] = b[10]);
		strip.setPixelColor(22, r[22] = r[10], g[22] = g[10], b[22] = b[10]);

		while (digitalRead(bgr) == 0)
		{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);

			strip.show(); //delay(bar16*bar16+1);
		}

		// strip.show();//delay(bar16*bar16+1);
	}

	if (digitalRead(bre) == 0)
	{
		//q19=random(0,4);q18=random(0,4);q17=random(0,4);
		strip.setPixelColor(10, r[10] = h, g[10] = h, b[10] = h);

		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);

		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(4, r[4] = r[0], g[4] = g[0], b[4] = b[0]);
		strip.setPixelColor(5, r[5] = r[0], g[5] = g[0], b[5] = b[0]);
		strip.setPixelColor(6, r[6] = r[0], g[6] = g[0], b[6] = b[0]);
		//     strip.setPixelColor(7,r[7]=r[0],g[7]=g[0],b[7]=b[0]);
		//      strip.setPixelColor(8,r[8]=r[0],g[8]=g[0],b[8]=b[0]);
		//      strip.setPixelColor(9,r[9]=r[0],g[9]=g[0],b[9]=b[0]);
		//      strip.setPixelColor(13,r[13]=r[0],g[13]=g[0],b[13]=b[0]);
		//      strip.setPixelColor(14,r[14]=r[0],g[14]=g[0],b[14]=b[0]);
		//    strip.setPixelColor(15,r[15]=r[0],g[15]=g[0],b[15]=b[0]);
		strip.setPixelColor(16, r[16] = r[0], g[16] = g[0], b[16] = b[0]);
		strip.setPixelColor(17, r[17] = r[0], g[17] = g[0], b[17] = b[0]);
		strip.setPixelColor(18, r[18] = r[0], g[18] = g[0], b[18] = b[0]);
		strip.setPixelColor(19, r[19] = r[0], g[19] = g[0], b[19] = b[0]);
		strip.setPixelColor(20, r[20] = r[0], g[20] = g[0], b[20] = b[0]);
		strip.setPixelColor(21, r[21] = r[0], g[21] = g[0], b[21] = b[0]);
		strip.setPixelColor(22, r[22] = r[0], g[22] = g[0], b[22] = b[0]);

		strip.setPixelColor(7, r[7] = r[10], g[7] = g[10], b[7] = b[10]);
		strip.setPixelColor(8, r[8] = r[10], g[8] = g[10], b[8] = b[10]);
		strip.setPixelColor(9, r[9] = r[10], g[9] = g[10], b[9] = b[10]);

		strip.setPixelColor(11, r[11] = r[10], g[11] = g[10], b[11] = b[10]);
		strip.setPixelColor(12, r[12] = r[10], g[12] = g[10], b[12] = b[10]);
		strip.setPixelColor(13, r[13] = r[10], g[13] = g[10], b[13] = b[10]);
		strip.setPixelColor(14, r[14] = r[10], g[14] = g[10], b[14] = b[10]);
		strip.setPixelColor(15, r[15] = r[10], g[15] = g[10], b[15] = b[10]);
	}

	while (digitalRead(bre) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);

		strip.show(); //delay(bar16*bar16+1);
	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}
}

	void iro3()
{
	while (digitalRead(bbl) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(2, r[2] = random(0, 17) * 15, g[2] = random(0, 17) * 15, b[2] = random(0, 17) * 15);
		strip.setPixelColor(4, r[4] = random(0, 17) * 15, g[4] = random(0, 17) * 15, b[4] = random(0, 17) * 15);
		//strip.show();delay(5*bar16*bar16+1);
		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(8, r[8] = r[0], g[8] = g[0], b[8] = b[0]);
		strip.setPixelColor(9, r[9] = r[0], g[9] = g[0], b[9] = b[0]);

		strip.setPixelColor(3, r[3] = r[2], g[3] = g[2], b[3] = b[2]);
		strip.setPixelColor(6, r[6] = r[2], g[6] = g[2], b[6] = b[2]);
		strip.setPixelColor(7, r[7] = r[2], g[7] = g[2], b[7] = b[2]);

		strip.setPixelColor(5, r[5] = r[4], g[5] = g[4], b[5] = b[4]);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	while (digitalRead(bgr) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);
		strip.setPixelColor(1, r[1] = random(0, 17) * 15, g[1] = random(0, 17) * 15, b[1] = random(0, 17) * 15);

		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(4, r[4] = r[0], g[4] = g[0], b[4] = b[0]);
		strip.setPixelColor(6, r[6] = r[0], g[6] = g[0], b[6] = b[0]);
		strip.setPixelColor(8, r[8] = r[0], g[8] = g[0], b[8] = b[0]);

		strip.setPixelColor(3, r[3] = r[1], g[3] = g[1], b[3] = b[1]);
		strip.setPixelColor(5, r[5] = r[1], g[5] = g[1], b[5] = b[1]);
		strip.setPixelColor(7, r[7] = r[1], g[7] = g[1], b[7] = b[1]);
		strip.setPixelColor(9, r[9] = r[1], g[9] = g[1], b[9] = b[1]);

		strip.show();
		delay(bar16 * bar16 + 1);
	}

	while (digitalRead(bre) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		strip.setPixelColor(0, r[0] = random(0, 17) * 15, g[0] = random(0, 17) * 15, b[0] = random(0, 17) * 15);

		strip.setPixelColor(1, r[1] = r[0], g[1] = g[0], b[1] = b[0]);
		strip.setPixelColor(2, r[2] = r[0], g[2] = g[0], b[2] = b[0]);
		strip.setPixelColor(3, r[3] = r[0], g[3] = g[0], b[3] = b[0]);
		strip.setPixelColor(4, r[4] = r[0], g[4] = g[0], b[4] = b[0]);
		strip.setPixelColor(5, r[5] = r[0], g[5] = g[0], b[5] = b[0]);
		strip.setPixelColor(6, r[6] = r[0], g[6] = g[0], b[6] = b[0]);
		strip.setPixelColor(7, r[7] = r[0], g[7] = g[0], b[7] = b[0]);
		strip.setPixelColor(8, r[8] = r[0], g[8] = g[0], b[8] = b[0]);
		strip.setPixelColor(9, r[9] = r[0], g[9] = g[0], b[9] = b[0]);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	while (digitalRead(b1) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, r[(w19 + random(0, 10)) % 9], g[(w19 + random(0, 10)) % 9], b[(w19 + random(0, 10)) % 9]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}

	while (digitalRead(b2) == 0)
	{ //q19=random(0,4);q18=random(0,4);q17=random(0,4);
		w19 = 0;
		while (w19 < 10)
		{
			strip.setPixelColor(w19, 255 - r[w19], 255 - g[w19], 255 - b[w19]);
			w19++;
		}
		strip.show();
		delay(bar16 * bar16 + 1);
		//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
	}
}

	void color()
{
	if (r[0] % 85 != 0)
		r[0] = 0;
	if (g[0] % 85 != 0)
		g[0] = 0;
	if (b[0] % 85 != 0)
		b[0] = 0;

	if (digitalRead(bre) == 0)
		strip.setPixelColor(0, r[0] += 85, g[0], b[0]);
	if (digitalRead(bgr) == 0)
		strip.setPixelColor(0, r[0], g[0] += 85, b[0]);
	if (digitalRead(bbl) == 0)
		strip.setPixelColor(0, r[0], g[0], b[0] += 85);

	while (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(5 * bar16 * bar16 + 1);
	}

	//strip.show();
	delay(5 * bar16 * bar16 + 1);

	w19 = 9;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 10)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void fade()
{
	void chain();

	if (digitalRead(bre) == 0)
		if (r[0] != 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
	if (digitalRead(bre) == 1)
		if (r[0] != 0)
			strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
	if (digitalRead(bgr) == 0)
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
	if (digitalRead(bgr) == 1)
		if (g[0] != 0)
			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
	if (digitalRead(bbl) == 0)
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	if (digitalRead(bbl) == 1)
		if (b[0] != 0)
			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);

	while (digitalRead(b2) == 0)
	{
		w15 = random(0, 3);
		if (w15 == 0)
		{
			if (r[0] != 255)
				while (r[0] != 255)
				{
					strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
					chain();
				}
			else
				while (r[0] != 0)
				{
					strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
					chain();
				}
		}
		if (w15 == 1)
		{
			if (g[0] != 255)
				while (g[0] != 255)
				{
					strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
					chain();
				}
			else
				while (g[0] != 0)
				{
					strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
					chain();
				}
		}
		if (w15 == 2)
		{
			if (b[0] != 255)
				while (b[0] != 255)
				{
					strip.setPixelColor(0, r[0], g[0], b[0] += i9);
					chain();
				}
			else
				while (b[0] != 0)
				{
					strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
					chain();
				}
		}
	}

	w19 = 9;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 10)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void plus2()
{
	if (digitalRead(bre) == 0)
		if (q29 < h)
			strip.setPixelColor(w29, q29++, q28, q27);
	if (digitalRead(bre) == 1)
		if (q29 > 0)
			strip.setPixelColor(w29, q29--, q28, q27);

	if (digitalRead(bgr) == 0)
		if (q28 < h)
			strip.setPixelColor(w28, q29, q28++, q27);
	if (digitalRead(bgr) == 1)
		if (q28 > 0)
			strip.setPixelColor(w28, q29, q28--, q27);
	if (digitalRead(bbl) == 0)
		if (q27 < h)
			strip.setPixelColor(w27, q29, q28, q27++);
	if (digitalRead(bbl) == 1)
		if (q27 > 0)
			strip.setPixelColor(w27, q29, q28, q27--);

	if (q29 == 0)
	{
		if (w29 > 0)
		{
			w29--;
			q29 = h - 1;
		}
	} //low down
	if (q29 == h)
	{
		if (w29 < 22)
		{
			w29++;
			q29 = 0;
		}
	} //high up
	if (q28 == 0)
	{
		if (w28 > 0)
		{
			w28--;
			q28 = h - 1;
		}
	} //low down
	if (q28 == h)
	{
		if (w28 < 22)
		{
			w28++;
			q28 = 0;
		}
	} //high up
	if (q27 == 0)
	{
		if (w27 > 0)
		{
			w27--;
			q27 = h - 1;
		}
	} //low down
	if (q27 == h)
	{
		if (w27 < 22)
		{
			w27++;
			q27 = 0;
		}
	} //high up
	//delayMicroseconds(bar8*bar8+1);
	delay(bar16 * bar16);
	//i9=0,i8=0,i7=0,u9=0,uu8=0,u7=0;
}

void plus3()
{
	if (digitalRead(bre) == 0)
		if (q29 < 13)
			strip.setPixelColor(w29, fib[q29++], q28, q27);
	if (digitalRead(bre) == 1)
		if (q29 > 0)
			strip.setPixelColor(w29, fib[q29--], q28, q27);

	if (digitalRead(bgr) == 0)
		if (q28 < 13)
			strip.setPixelColor(w28, q29, fib[q28++], q27);
	if (digitalRead(bgr) == 1)
		if (q28 > 0)
			strip.setPixelColor(w28, q29, fib[q28--], q27);
	if (digitalRead(bbl) == 0)
		if (q27 < 13)
			strip.setPixelColor(w27, q29, q28, fib[q27++]);
	if (digitalRead(bbl) == 1)
		if (q27 > 0)
			strip.setPixelColor(w27, q29, q28, fib[q27--]);

	if (q29 == 0)
	{
		if (w29 > 0)
		{
			w29--;
			q29 = 12 - 1;
		}
	} //low down
	if (q29 == 12)
	{
		if (w29 < 22)
		{
			w29++;
			q29 = 0;
		}
	} //high up
	if (q28 == 0)
	{
		if (w28 > 0)
		{
			w28--;
			q28 = 12 - 1;
		}
	} //low down
	if (q28 == 12)
	{
		if (w28 < 22)
		{
			w28++;
			q28 = 0;
		}
	} //high up
	if (q27 == 0)
	{
		if (w27 > 0)
		{
			w27--;
			q27 = 12 - 1;
		}
	} //low down
	if (q27 == 12)
	{
		if (w27 < 22)
		{
			w27++;
			q27 = 0;
		}
	} //high up
	//delayMicroseconds(bar8*bar8+1);
	delay(bar16 * bar16);
	//i9=0,i8=0,i7=0,u9=0,uu8=0,u7=0;
}

void throw1a()
{
	w18 = 0;
	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0], b[0]);
			u9++;
		}
		else
		{
			u9 = 0;
			u6 = 1;
		}
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0], g[0] = h, b[0]);
			uu8++;
		}
		else
		{
			uu8 = 0;
			u5 = 1;
		}
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0], g[0], b[0] = h);
			u7++;
		}
		else
		{
			u7 = 0;
			u4 = 1;
		}
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}
	if (u9 > 1000 / u6)
	{
		strip.setPixelColor(0, r[0] = 0, g[0] = h, b[0] = h);
		u9 = 0;
		u6++;
	}

	//if(u6>50/u3){strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);u6=0;u3++;}

	if (uu8 > 1000 / u5)
	{
		strip.setPixelColor(0, r[0] = h, g[0] = 0, b[0] = h);
		uu8 = 0;
		u5++;
	}

	if (u7 > 1000 / u4)
	{
		strip.setPixelColor(0, r[0] = h, g[0] = h, b[0] = 0);
		u7 = 0;
		u4++;
	}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		//  if(w19==h)
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void throw1()
{
	w18 = 0;
	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0], b[0]);
			u9++;
		}
		else
			u9 = 0;
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0], g[0] = h, b[0]);
			uu8++;
		}
		else
			uu8 = 0;
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0], g[0], b[0] = h);
			u7++;
		}
		else
			u7 = 0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}
	if (u9 > 1000)
	{
		q19 = random(0, 17);
		q18 = random(0, 17);
		q17 = random(0, 17);
		strip.setPixelColor(0, r[0] = 0, g[0] = h, b[0] = h);
		u9 -= vr500;
	}

	if (uu8 > 1000)
	{
		q19 = random(0, 17);
		q18 = random(0, 17);
		q17 = random(0, 17);
		strip.setPixelColor(0, r[0] = h, g[0] = 0, b[0] = h);
		uu8 -= vr500;
	}

	if (u7 > 1000)
	{
		q19 = random(0, 17);
		q18 = random(0, 17);
		q17 = random(0, 17);
		strip.setPixelColor(0, r[0] = h, g[0] = h, b[0] = 0);
		u7 -= vr500;
	}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw2()
{

	if (digitalRead(bre) == 0)
		if (r[0] != 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
	if (digitalRead(bre) == 1)
	{
		if (r[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
		//else strip.setPixelColor(0,r[0]=0,g[0],b[0]);
	}
	if (digitalRead(bgr) == 0)
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
	if (digitalRead(bgr) == 1)
	{
		if (g[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
		//else strip.setPixelColor(0,r[0],g[0]=0,b[0]);
	}
	if (digitalRead(bbl) == 0)
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	if (digitalRead(bbl) == 1)
	{
		if (b[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
		//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw2b()
{

	if (digitalRead(bre) == 0)
		if (r[0] != 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
	if (digitalRead(bre) == 1)
	{
		if (r[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
		//else strip.setPixelColor(0,r[0]=0,g[0],b[0]);
	}
	if (digitalRead(bgr) == 0)
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
	if (digitalRead(bgr) == 1)
	{
		if (g[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
		//else strip.setPixelColor(0,r[0],g[0]=0,b[0]);
	}
	if (digitalRead(bbl) == 0)
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	if (digitalRead(bbl) == 1)
	{
		if (b[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
		//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		if(vr21024<1020){
		    if(r[w19]==h ||g[w19]==h || b[w19]==h){
		     	randNumber = random(vr5000); // 0から299の乱数を生成
				if(randNumber==7)strip.setPixelColor(w19,0,0,h);
				if(randNumber==1)strip.setPixelColor(w19,0,h,0);
				if(randNumber==2)strip.setPixelColor(w19,0,h,h);
				if(randNumber==3)strip.setPixelColor(w19,h,0,0);
				if(randNumber==5)strip.setPixelColor(w19,h,0,h);
				if(randNumber==4)strip.setPixelColor(w19,h,h,0);
				if(randNumber==6)strip.setPixelColor(w19,h,h,h);
			}
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw2bcn()
{

	if (digitalRead(bre) == 0){
		if (r[0] < 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		// if (g[0] < 20)
		// 	strip.setPixelColor(0, r[0] , g[0]+= i9, b[0]);
		if (b[0] < 40)
			strip.setPixelColor(0, r[0] , g[0], b[0]+= i9);
	}

	if (digitalRead(bgr) == 0){
		if (r[0] < 20)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] < 255)
			strip.setPixelColor(0, r[0] , g[0]+= i9, b[0]);
		if (b[0] < 80)
			strip.setPixelColor(0, r[0] , g[0], b[0]+= i9);
	}

	if (digitalRead(bbl) == 0){
		if (r[0] < 120)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		// if (g[0] < 20)
		// 	strip.setPixelColor(0, r[0] , g[0]+= i9, b[0]);
		if (b[0] < 255)
			strip.setPixelColor(0, r[0] , g[0], b[0]+= i9);
	}
	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1)
	{
		if (r[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);

		if (g[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);

		if (b[0] >= i9)
			if (random(vr50) < 5)
				strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
		//else strip.setPixelColor(0,r[0],g[0],b[0]=0);		
	}

	if (digitalRead(bre) != 0 || digitalRead(bgr) != 0 || digitalRead(bbl) != 0){
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{
			if (b[0] >= i8)
				if (random(vr50) < 5)
					strip.setPixelColor(0, r[0], g[0], b[0] -= i8);
			//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
		}
		if (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			if (r[0] >= i8)
				if (random(vr50) < 5)
					strip.setPixelColor(0, r[0] -= i8, g[0], b[0]);
			//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
		}
		if (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			if (g[0] >= i8)
				if (random(vr50) < 5)
					strip.setPixelColor(0, r[0], g[0]-= i8, b[0]);
			//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
		}
	}
	
	if (digitalRead(b2) == 0)
	{

			if(rcnt++<4) {
				strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);}
			else {
				q19 = random(0, 4);
				q18 = random(0, 4);
				q17 = random(0, 4);				
				// strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); 
				rcnt=0;}

			// q19 = random(0, 4);
			// q18 = random(0, 4);
			// q17 = random(0, 4);
			// strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);




		// q19 = random(0, 4);
		// q18 = random(0, 4);
		// q17 = random(0, 4);
		// strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);

		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		if(vr21024<1020){
		    if(r[w19]==h ||g[w19]==h || b[w19]==h){
		     	randNumber = random(vr5000); // 0から299の乱数を生成
				if(randNumber==7)strip.setPixelColor(w19,0,0,h);
				if(randNumber==1)strip.setPixelColor(w19,0,h,0);
				if(randNumber==2)strip.setPixelColor(w19,0,h,h);
				if(randNumber==3)strip.setPixelColor(w19,h,0,0);
				if(randNumber==5)strip.setPixelColor(w19,h,0,h);
				if(randNumber==4)strip.setPixelColor(w19,h,h,0);
				if(randNumber==6)strip.setPixelColor(w19,h,h,h);
			}
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw3()
{
	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){

	// if(random(2)==0)rndr =0; else rndr = random(0, 10)* 15;
	// if(random(2)==0)rndg =0; else rndg = random(0, 10)* 15;
	// if(random(2)==0)rndb =0; else rndb = random(0, 10)* 15;

	// random(0, 2) ? rndr =0 : rndr =	random(0, 10)* 15;
	// random(0, 2) ? rndg =0 : rndg =	random(0, 10)* 15;
	// random(0, 2) ? rndb =0 : rndb =	random(0, 10)* 15;

	 rndr = random(0, 5) * 15;
	 rndg = random(0, 5) * 15;
	 rndb = random(0, 5) * 15;
	}
	

	if (digitalRead(bre) == 0 ){
		if (r[0] != 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}
	if (digitalRead(bgr) == 0 ){
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}
	if (digitalRead(bbl) == 0 ){
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}

	// if (digitalRead(bre) == 1)
	// {
	// 	if (r[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
	// 	//else strip.setPixelColor(0,r[0]=0,g[0],b[0]);
	// }

	// if (digitalRead(bgr) == 1)
	// {
	// 	if (g[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
	// 	//else strip.setPixelColor(0,r[0],g[0]=0,b[0]);
	// }

	// if (digitalRead(bbl) == 1)
	// {
	// 	if (b[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
	// 	//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
	// }

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)
		if (r[0] >= i9 )
				strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
		if (g[0] >= i9)
				strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
		if (b[0] >= i9)
				strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
	}

	
	// if (digitalRead(bgr) == 0)
	// 	if (g[0] != 255)
	// 		strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
	// if (digitalRead(bgr) == 1)
	// {
	// 	if (g[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);

	// }
	// if (digitalRead(bbl) == 0)
	// 	if (b[0] != 255)
	// 		strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	// if (digitalRead(bbl) == 1)
	// {
	// 	if (b[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);

	// }

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw3b()
{
	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
	 rndr = random(0, 5) * 15;
	 rndg = random(0, 5) * 15;
	 rndb = random(0, 5) * 15;
	}
	

	if (digitalRead(bre) == 0 ){
		if (r[0] != 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}
	if (digitalRead(bgr) == 0 ){
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}
	if (digitalRead(bbl) == 0 ){
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}

	// if (digitalRead(bre) == 1)
	// {
	// 	if (r[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
	// 	//else strip.setPixelColor(0,r[0]=0,g[0],b[0]);
	// }

	// if (digitalRead(bgr) == 1)
	// {
	// 	if (g[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
	// 	//else strip.setPixelColor(0,r[0],g[0]=0,b[0]);
	// }

	// if (digitalRead(bbl) == 1)
	// {
	// 	if (b[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
	// 	//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
	// }

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)
		if (r[0] >= i9 )
				strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
		if (g[0] >= i9)
				strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
		if (b[0] >= i9)
				strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
	}

	
	// if (digitalRead(bgr) == 0)
	// 	if (g[0] != 255)
	// 		strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
	// if (digitalRead(bgr) == 1)
	// {
	// 	if (g[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);

	// }
	// if (digitalRead(bbl) == 0)
	// 	if (b[0] != 255)
	// 		strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	// if (digitalRead(bbl) == 1)
	// {
	// 	if (b[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);

	// }

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		    if(r[w19]==h ||g[w19]==h || b[w19]==h){
		    //  randNumber = random(vr5000); // 0から299の乱数を生成
		     randNumber = random(1,7); // 0から299の乱数を生成
			
		   if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		   if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		   if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		   if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		   if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		   if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		   if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw3bf()
{
	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
	 rndr = random(0, 5) * 15;
	 rndg = random(0, 5) * 15;
	 rndb = random(0, 5) * 15;
	}

	if (digitalRead(bre) == 0 ){

		// if (digitalRead(bgr) != 0 ){	strip.setPixelColor(0, r[0] =  250 , g[0], b[0] );	}
		// if (digitalRead(bbl) != 0 ){	strip.setPixelColor(0, r[0] =  250 , g[0], b[0]);	}

		// if (r[0] == h ){	strip.setPixelColor(0, r[0]=  250 , g[0] , b[0] );	}
		// if (g[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  250 , b[0] );	}
		// if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  250 );	}

		if (r[0] == h ){	strip.setPixelColor(0, r[0]=  rndr* 4 , g[0] , b[0] );	}
		if (g[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  rndg* 4 , b[0] );	}
		if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  rndb* 4 );	}
		if (digitalRead(bgr) == 0 ){	strip.setPixelColor(0, r[0]=  h , g[0] , b[0] );	}
		if (digitalRead(bbl) == 0 ){	strip.setPixelColor(0, r[0]=  h , g[0] , b[0]);	}


		// if (r[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  250 , b[0] );	}
		// if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  250 , b[0] );	}
		// if (digitalRead(bgr) == 0 ){	strip.setPixelColor(0, r[0] , g[0] =  h, b[0] );	}
		// if (digitalRead(bbl) == 0 ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  h );	}


		if (r[0]+i9 < 255)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);


			
	}
	if (digitalRead(bgr) == 0 ){

		// if (digitalRead(bre) != 0 ){	strip.setPixelColor(0, r[0] , g[0]=  250, b[0] );	}
		// if (digitalRead(bbl) != 0 ){	strip.setPixelColor(0, r[0] , g[0]=  250, b[0]);	}

		// if (r[0] == h ){	strip.setPixelColor(0, r[0]=  250 , g[0] , b[0] );	}
		// if (g[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  250 , b[0] );	}
		// if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  250 );	}

		if (r[0] == h ){	strip.setPixelColor(0, r[0]=  rndr* 4 , g[0] , b[0] );	}
		if (g[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  rndg* 4 , b[0] );	}
		if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  rndb* 4 );	}
		if (digitalRead(bre) == 0 ){	strip.setPixelColor(0, r[0] , g[0]=  h , b[0] );}
		if (digitalRead(bbl) == 0 ){	strip.setPixelColor(0, r[0] , g[0]=  h , b[0]);	}		

		// if (digitalRead(bre) == 0 ){	strip.setPixelColor(0, r[0] =  h , g[0], b[0] );	}
		// if (digitalRead(bbl) == 0 ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  h );	}
		
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0]+i9 < 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}
	if (digitalRead(bbl) == 0 ){

		// if (digitalRead(bre) != 0 ){	strip.setPixelColor(0, r[0]=  100 , g[0] , b[0]=  100 );	}
		// if (digitalRead(bgr) != 0 ){	strip.setPixelColor(0, r[0]=  100 , g[0] , b[0]=  100);	}

		// if (r[0] == h ){	strip.setPixelColor(0, r[0]=  250 , g[0] , b[0] );	}
		// if (g[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  250 , b[0] );	}
		// if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  250 );	}


		if (r[0] == h ){	strip.setPixelColor(0, r[0]=  rndr* 4 , g[0] , b[0] );	}
		if (g[0] == h ){	strip.setPixelColor(0, r[0] , g[0]=  rndg* 4 , b[0] );	}
		if (b[0] == h ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  rndb* 4 );	}
		if (digitalRead(bre) == 0 ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  h );	}
		if (digitalRead(bgr) == 0 ){	strip.setPixelColor(0, r[0] , g[0] , b[0]=  h);	}
		
		// if (digitalRead(bre) == 0 ){	strip.setPixelColor(0, r[0] =  h , g[0] , b[0] );	}
		// if (digitalRead(bgr) == 0 ){	strip.setPixelColor(0, r[0] , g[0] =  h , b[0] );	}
		
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0]+i9 < 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}

	// if (digitalRead(bre) == 1)
	// {
	// 	if (r[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
	// 	//else strip.setPixelColor(0,r[0]=0,g[0],b[0]);
	// }

	// if (digitalRead(bgr) == 1)
	// {
	// 	if (g[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
	// 	//else strip.setPixelColor(0,r[0],g[0]=0,b[0]);
	// }

	// if (digitalRead(bbl) == 1)
	// {
	// 	if (b[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
	// 	//else strip.setPixelColor(0,r[0],g[0],b[0]=0);
	// }

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)
		if (r[0] >= i9 )
				strip.setPixelColor(0, r[0] -= i9, g[0], b[0]);
		if (g[0] >= i9)
				strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);
		if (b[0] >= i9)
				strip.setPixelColor(0, r[0], g[0], b[0] -= i9);
	}

	
	// if (digitalRead(bgr) == 0)
	// 	if (g[0] != 255)
	// 		strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
	// if (digitalRead(bgr) == 1)
	// {
	// 	if (g[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0] -= i9, b[0]);

	// }
	// if (digitalRead(bbl) == 0)
	// 	if (b[0] != 255)
	// 		strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	// if (digitalRead(bbl) == 1)
	// {
	// 	if (b[0] >= i9)
	// 		if (random(vr50) < 5)
	// 			strip.setPixelColor(0, r[0], g[0], b[0] -= i9);

	// }

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 2);
		q18 = random(0, 2);
		q17 = random(0, 2);
		strip.setPixelColor(0, r[0] = q19 * h, g[0] = q18 * h, b[0] = q17 * h);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		    if(r[w19]==h ||g[w19]==h || b[w19]==h){
		    //  randNumber = random(vr5000); // 0から299の乱数を生成
		     randNumber = random(1,8); // 0から299の乱数を生成
			
		   if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		   if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		   if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		   if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		   if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		   if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		   if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void _cycleFade()
{

	if (digitalRead(bre) == 0 ){
		uint32_t Wheel(byte WheelPos);

		ptrR = (ptrR+1)&0xff;
		ptrG = (ptrG+2)&0xff;
		ptrB = (ptrB+3)&0xff;

		// for(uint16_t i=0; i<strip.numPixels(); i++) {
			unsigned int valR = strip.sine8((ptrR+j)&0xff);
			unsigned int valG = strip.sine8((ptrG+j)&0xff);
			unsigned int valB = strip.sine8((ptrB+j)&0xff);

			(j<22) ? j+=1 : j=0;
			strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);
						
			// (j<256) ? j+=1 : j=0;		
			// strip.setPixelColor(0, rcol[0]=Wheel((( 256 / strip.numPixels()) + j) & 255));

			// strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));

	}

	if (digitalRead(bgr) == 0 ){
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] != 255)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] <= rndb)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}
	if (digitalRead(bbl) == 0 ){
		if (r[0] <= rndr)
			strip.setPixelColor(0, r[0] += i9, g[0], b[0]);
		if (g[0] <= rndg)
			strip.setPixelColor(0, r[0], g[0] += i9, b[0]);
		if (b[0] != 255)
			strip.setPixelColor(0, r[0], g[0], b[0] += i9);
	}

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)
		if (rcol[0] >= 1 )
				strip.setPixelColor(0, rcol[0]-= 1, gcol[0] , bcol[0]);
		if (gcol[0] >= 1 )
				strip.setPixelColor(0, rcol[0], gcol[0] -= 1, bcol[0]);
		if (bcol[0] >= 1 )
				strip.setPixelColor(0, rcol[0], gcol[0], bcol[0] -= 1);								
		// if (g[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0] -= 1, b[0]);
		// if (b[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0], b[0] -= 1);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		rcol[w19] = rcol[w19 - 1];
		gcol[w19] = gcol[w19 - 1];
		bcol[w19] = bcol[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, rcol[w19], gcol[w19], bcol[w19]);
		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void cycleFade()
{

	if (digitalRead(bre) == 0 ){
		uint32_t Wheel(byte WheelPos);

		

		ptrR = (ptrR+1)&0xff;
		ptrG = (ptrG+2)&0xff;
		ptrB = (ptrB+3)&0xff;

		// for(uint16_t i=0; i<strip.numPixels(); i++) {
			unsigned int valR = strip.sine8((ptrR+j)&0xff);
			unsigned int valG = strip.sine8((ptrG+j)&0x7f);
			unsigned int valB = strip.sine8((ptrB+j)&0x7f);

			(j<22) ? j+=1 : j=0;
			strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);
						
			// (j<256) ? j+=1 : j=0;		
			// strip.setPixelColor(0, rcol[0]=Wheel((( 256 / strip.numPixels()) + j) & 255));

			// strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));

	}

	if (digitalRead(bgr) == 0 ){
		ptrR = (ptrR+1)&0xff;
		ptrG = (ptrG+2)&0xff;
		ptrB = (ptrB+3)&0xff;

		// for(uint16_t i=0; i<strip.numPixels(); i++) {
			unsigned int valR = strip.sine8((ptrR+j)&0x7f);
			unsigned int valG = strip.sine8((ptrG+j)&0xff);
			unsigned int valB = strip.sine8((ptrB+j)&0x7f);

			(j<22) ? j+=1 : j=0;
			strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);


	}
	if (digitalRead(bbl) == 0 ){
		ptrR = (ptrR+1)&0xff;
		ptrG = (ptrG+2)&0xff;
		ptrB = (ptrB+3)&0xff;

		// for(uint16_t i=0; i<strip.numPixels(); i++) {
			unsigned int valR = strip.sine8((ptrR+j)&0x7f);
			unsigned int valG = strip.sine8((ptrG+j)&0x7f);
			unsigned int valB = strip.sine8((ptrB+j)&0xff);

			(j<22) ? j+=1 : j=0;
			strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);
	}

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)
		if (rcol[0] >= 1 )
				strip.setPixelColor(0, rcol[0]-= 1, gcol[0] , bcol[0]);
		if (gcol[0] >= 1 )
				strip.setPixelColor(0, rcol[0], gcol[0] -= 1, bcol[0]);
		if (bcol[0] >= 1 )
				strip.setPixelColor(0, rcol[0], gcol[0], bcol[0] -= 1);								
		// if (g[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0] -= 1, b[0]);
		// if (b[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0], b[0] -= 1);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		rcol[w19] = rcol[w19 - 1];
		gcol[w19] = gcol[w19 - 1];
		bcol[w19] = bcol[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		strip.setPixelColor(w19, rcol[w19], gcol[w19], bcol[w19]);
		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void _hsvFade()
{

	int step_num = 0;

	if (digitalRead(bre) == 0 ){
		// uint32_t Wheel(byte WheelPos);

		//   for(int i=0; i<strip.numPixels(); i++) {
				// ストリップの長さに沿って色相環（65536の範囲）を1回転させる量だけピクセルの色相をオフセットします。
							(j<22) ? j+=1 : j=0;
				int pixelHue = step_num + (j * 65536L / strip.numPixels());
				// ColorHSV関数に色相(0 to 65535)を渡し、その結果をgamma32()でガンマ補正します。
				strip.setPixelColor(0, rcol[0]=strip.gamma32(strip.ColorHSV(pixelHue)));
			// }
			// strip.show();
			step_num += 256;
			if (step_num == 65536) {
				step_num = 0;
			}




		// ptrR = (ptrR+1)&0xff;
		// ptrG = (ptrG+2)&0xff;
		// ptrB = (ptrB+3)&0xff;

		// // for(uint16_t i=0; i<strip.numPixels(); i++) {
		// 	unsigned int valR = strip.sine8((ptrR+j)&0xff);
		// 	unsigned int valG = strip.sine8((ptrG+j)&0x7f);
		// 	unsigned int valB = strip.sine8((ptrB+j)&0x7f);

		// 	(j<22) ? j+=1 : j=0;
			// strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);
						
			// (j<256) ? j+=1 : j=0;		
			// strip.setPixelColor(0, rcol[0]=Wheel((( 256 / strip.numPixels()) + j) & 255));

			// strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));

	}

	if (digitalRead(bgr) == 0 ){
		ptrR = (ptrR+1)&0xff;
		ptrG = (ptrG+2)&0xff;
		ptrB = (ptrB+3)&0xff;

		// for(uint16_t i=0; i<strip.numPixels(); i++) {
			unsigned int valR = strip.sine8((ptrR+j)&0x7f);
			unsigned int valG = strip.sine8((ptrG+j)&0xff);
			unsigned int valB = strip.sine8((ptrB+j)&0x7f);

			(j<22) ? j+=1 : j=0;
			strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);


	}
	if (digitalRead(bbl) == 0 ){
		ptrR = (ptrR+1)&0xff;
		ptrG = (ptrG+2)&0xff;
		ptrB = (ptrB+3)&0xff;

		// for(uint16_t i=0; i<strip.numPixels(); i++) {
			unsigned int valR = strip.sine8((ptrR+j)&0x7f);
			unsigned int valG = strip.sine8((ptrG+j)&0x7f);
			unsigned int valB = strip.sine8((ptrB+j)&0xff);

			(j<22) ? j+=1 : j=0;
			strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);
	}

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)

		// if (rcol[0] >= 1 )
		// strip.setPixelColor(0, rcol[0]<< 1);

		// if (rcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0]-= 1, gcol[0] , bcol[0]);
		// if (gcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0] -= 1, bcol[0]);
		// if (bcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0], bcol[0] -= 1);		

		// if (g[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0] -= 1, b[0]);
		// if (b[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0], b[0] -= 1);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		rcol[w19] = rcol[w19 - 1];
		// gcol[w19] = gcol[w19 - 1];
		// bcol[w19] = bcol[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		// strip.setPixelColor(w19, rcol[w19], gcol[w19], bcol[w19]);
		strip.setPixelColor(w19, rcol[w19]);

		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void hsvFade()
{


			// (j<180) ? j+=1 : j=0;
			// (angle<180) ? angle+=1 : angle=0;


	if (digitalRead(bre) == 0 ){

			// (angle<180) ? angle+=1 : angle=0;

			// float angle_rad = angle * M_PI / 180;
			// float sin_result = sin(angle_rad);

			// rcol[0]= 65535*sin_result;

			((rcol[0]+256)<=65535) ? rcol[0]+=256 : rcol[0]=0;
		



			strip.setPixelColor(0, strip.gamma32(strip.ColorHSV(rcol[0],sat[0],val[0])));

				// strip.setPixelColor(0, strip.ColorHSV(rcol[0]+=j,255,255));
			// }
			// strip.show();




		// ptrR = (ptrR+1)&0xff;
		// ptrG = (ptrG+2)&0xff;
		// ptrB = (ptrB+3)&0xff;

		// // for(uint16_t i=0; i<strip.numPixels(); i++) {
		// 	unsigned int valR = strip.sine8((ptrR+j)&0xff);
		// 	unsigned int valG = strip.sine8((ptrG+j)&0x7f);
		// 	unsigned int valB = strip.sine8((ptrB+j)&0x7f);

		// 	(j<22) ? j+=1 : j=0;
			// strip.setPixelColor(0, rcol[0]=valR, gcol[0]=valG, bcol[0]=valB);
						
			// (j<256) ? j+=1 : j=0;		
			// strip.setPixelColor(0, rcol[0]=Wheel((( 256 / strip.numPixels()) + j) & 255));

			// strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));

	}

	if (digitalRead(bgr) == 0 ){

			(angle<180) ? angle+=1 : angle=0;

			float angle_rad = angle * M_PI / 180;
			float sin_result = sin(angle_rad);

			// rcol[0]= 20000*sin_result+20000;

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat,val=h));
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],val[0]=h*sin_result));
			

	}
	if (digitalRead(bbl) == 0 ){
		
			(angle<180) ? angle+=1 : angle=0;

			float angle_rad = angle * M_PI / 180;
			float sin_result = sin(angle_rad);

			// rcol[0]= 20000*sin_result+40000;

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat=h,val));
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0]=h*sin_result,val[0]));
	}

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){

		// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat,val-=1));

		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)

		// if (rcol[0] >= 1 )
		// strip.setPixelColor(0, rcol[0]<< 1);

		// if (rcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0]-= 1, gcol[0] , bcol[0]);
		// if (gcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0] -= 1, bcol[0]);
		// if (bcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0], bcol[0] -= 1);		

		// if (g[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0] -= 1, b[0]);
		// if (b[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0], b[0] -= 1);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		rcol[w19] = rcol[w19 - 1];
		// gcol[w19] = gcol[w19 - 1];
		// bcol[w19] = bcol[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		// strip.setPixelColor(w19, rcol[w19], gcol[w19], bcol[w19]);
		// strip.setPixelColor(w19, rcol[w19]);

		strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));

		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void hsvFade2()
{

	if (digitalRead(bre) == 0 ){
			// rcol[0]=27306;
			// ((rcol[0]+256)<=27306) ? rcol[0]+=256 : rcol[0]=5461;

			// (0<Gfue<255) ? Gfue+=pm : pm*=-1;
			if(0<Gfue && Gfue<255) Gfue+=pm; else {pm*=-1;Gfue+=pm;}

			// (Rfue<255) ? Rfue+=1 : Rfue=0;
			// rcol[0]=(64*strip.sine8(Rfue))+(64*256);

			rcol[0]=(42*Gfue)+(64*256);
			// rcol[0]=(85*strip.sine8(Rfue))+5461;

			// strip.setPixelColor(0, strip.gamma32(strip.ColorHSV(rcol[0],sat,(val<255) ? val+=1 : val)));
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+10<255) ? val[0]+=10 : val[0]));
			// strip.setPixelColor(0, strip.gamma32(strip.ColorHSV(rcol[0],sat,(val<255) ? val+=1 : val)));

	}

	if (digitalRead(bgr) == 0 ){

			if(0<Gfue && Gfue<255) Gfue+=pm; else {pm*=-1;Gfue+=pm;}
			rcol[0]=(42*Gfue)+(64*256);
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));




			// (Rfue<255) ? Rfue+=1 : Rfue=0;
			// rcol[0]=(42*strip.sine8(Rfue))+(64*256);
			// strip.setPixelColor(0, strip.gamma32(strip.ColorHSV(rcol[0],sat,(val<255) ? val+=1 : val)));

			// (Gfue<255) ? Gfue+=1 : Gfue=0;
			// rcol[0]=(85*strip.sine8(Gfue))+27306;

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat,(val<255) ? val+=1 : val));


			// (angle<180) ? angle+=1 : angle=0;

			// float angle_rad = angle * M_PI / 180;
			// float sin_result = sin(angle_rad);

			// (Csat<255) ? Csat+=1 : Csat=0;

			// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat=strip.sine8(Csat),val));			

	}
	if (digitalRead(bbl) == 0 ){
		
					// for (byte i = 0; i < 255; i++)	n =(i+192)&0xff;
						(Cval<255) ? Cval+=1 : Cval=0;

			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],val[0]=strip.sine8(Cval)));	

	}

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){

		strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]>0) ? val[0]-=i9 : val[0]));	

		// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat,val-=1));

		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)

		// if (rcol[0] >= 1 )
		// strip.setPixelColor(0, rcol[0]<< 1);

		// if (rcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0]-= 1, gcol[0] , bcol[0]);
		// if (gcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0] -= 1, bcol[0]);
		// if (bcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0], bcol[0] -= 1);		

		// if (g[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0] -= 1, b[0]);
		// if (b[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0], b[0] -= 1);
	}

	if (digitalRead(b2) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		delay(bar16 * bar16 + 1);
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	while (digitalRead(b1) == 0)
	{
		q19 = random(0, 4);
		q18 = random(0, 4);
		q17 = random(0, 4);
		strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
		strip.show();
		delay(bar16 * bar16 + 1);
	}

	w19 = 22;
	while (w19 > 0)
	{
		rcol[w19] = rcol[w19 - 1];
		sat[w19] = sat[w19 - 1];
		val[w19] = val[w19 - 1];
		// gcol[w19] = gcol[w19 - 1];
		// bcol[w19] = bcol[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		// strip.setPixelColor(w19, rcol[w19], gcol[w19], bcol[w19]);
		// strip.setPixelColor(w19, rcol[w19]);

		strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));

		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void hsvFade3()
{

	if (digitalRead(bre) == 0 ){

			if(0<Rfue && Rfue<255) Rfue+=pm; else {pm*=-1;Rfue+=pm;}
			rcol[0]=(42*Rfue)+(234*256);
			if(65535<rcol[0])rcol[0]-65535;
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
	}

	if (digitalRead(bgr) == 0 ){

			if(0<Gfue && Gfue<255) Gfue+=pm; else {pm*=-1;Gfue+=pm;}
			rcol[0]=(42*Gfue)+(64*256);
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
	}
	if (digitalRead(bbl) == 0 ){		
			if(0<Bfue && Bfue<255) Bfue+=pm; else {pm*=-1;Bfue+=pm;}
			rcol[0]=(42*Bfue)+(149*256);
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
	}

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1 && digitalRead(b1) == 1 && digitalRead(b2) == 1 && digitalRead(b3) == 1){

		strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]>0) ? val[0]-=i9 : val[0]));	

		// strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat,val-=1));

		// if (r[0] >= i9 && g[0] >= i9 && b[0] >= i9)

		// if (rcol[0] >= 1 )
		// strip.setPixelColor(0, rcol[0]<< 1);

		// if (rcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0]-= 1, gcol[0] , bcol[0]);
		// if (gcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0] -= 1, bcol[0]);
		// if (bcol[0] >= 1 )
		// 		strip.setPixelColor(0, rcol[0], gcol[0], bcol[0] -= 1);		

		// if (g[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0] -= 1, b[0]);
		// if (b[0] >= 1)
		// 		strip.setPixelColor(0, r[0], g[0], b[0] -= 1);
	}

	if (digitalRead(b1) == 0)
	{
			// if(0<Bfue && Bfue<256) Bfue+=pm; else {pm*=-1;Bfue+=pm;}
			// if(0<fue1 && fue1<32) fue1+=pm; else {pm*=-1;fue1+=pm;}
			if(fue1<32) fue1+=1; else {fue1=0;}
			rcol[0]=(2048*fue1);
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			delay(bar16 * bar16 + 1);			
	}

	//    while(digitalRead(b4)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
	//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}

	if (digitalRead(b2) == 0)
	{

			(Rfue<255) ? Rfue+=1 : Rfue=0;
			sat[0]=strip.sine8(Rfue);
			// sat[0]=(strip.sine8(Rfue))+(64*256);
			// rcol[0]=(64*strip.sine8(Rfue))+(64*256);


			if(fue1<32) fue1+=1; else {fue1=0;}
			rcol[0]=(2048*fue1);
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			delay(bar16 * bar16 + 1);	

	// 		if(fue2<16) fue2+=pm; else {fue2=0;}
	// 		rcol[0]=(4096*fue2);
	// 		strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
	// 		delay(bar16 * bar16 + 1);			
	}

	w19 = 22;
	while (w19 > 0)
	{
		rcol[w19] = rcol[w19 - 1]+512;
		sat[w19] = sat[w19 - 1];
		val[w19] = val[w19 - 1];
		// gcol[w19] = gcol[w19 - 1];
		// bcol[w19] = bcol[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];
		w19--;
	}

	while (w19 < 23)
	{
		// strip.setPixelColor(w19, rcol[w19], gcol[w19], bcol[w19]);
		// strip.setPixelColor(w19, rcol[w19]);

		strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));

		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		//     if(r[w19]==h ||g[w19]==h || b[w19]==h){
		//      randNumber = random(vr5000); // 0から299の乱数を生成
		//    if(randNumber==7)strip.setPixelColor(w19,0,0,h);
		//    if(randNumber==1)strip.setPixelColor(w19,0,h,0);
		//    if(randNumber==2)strip.setPixelColor(w19,0,h,h);
		//    if(randNumber==3)strip.setPixelColor(w19,h,0,0);
		//    if(randNumber==5)strip.setPixelColor(w19,h,0,h);
		//    if(randNumber==4)strip.setPixelColor(w19,h,h,0);
		//    if(randNumber==6)strip.setPixelColor(w19,h,h,h);  }

		w19++;
	}
	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void throw5()
{

	if (digitalRead(bre) == 0)
	{
		w19 = 0;
		while (w19 < 23)
		{

			strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

			//      randNumber = random(0,23); // 0から299の乱数を生成
			//      q17=random(0,4);
			//      if(randNumber==w19)strip.setPixelColor(w19,r[w19]=q17*85,g[w19],b[w19]);

			randNumber = random(vr500); // 0から299の乱数を生成
			q19 = random(0, 17);
			q18 = random(0, 17);
			q17 = random(0, 17);
			if (randNumber == 1)
				strip.setPixelColor(w19, r[w19] = q17 * 15, g[w19], b[w19]);
			if (randNumber == 2)
				strip.setPixelColor(w19, r[w19] = q18 * 15, g[w19], b[w19]);
			if (randNumber == 3)
				strip.setPixelColor(w19, r[w19] = q19 * 15, g[w19], b[w19]);
			if (randNumber == 4)
				strip.setPixelColor(w19, r[w19] = q19 * 15, g[w19], b[w19]);
			if (randNumber == 5)
				strip.setPixelColor(w19, r[w19] = q18 * 15, g[w19], b[w19]);
			if (randNumber == 6)
				strip.setPixelColor(w19, r[w19] = q17 * 15, g[w19], b[w19]);
			if (randNumber == 7)
				strip.setPixelColor(w19, r[w19] = q18 * 15, g[w19], b[w19]);

			w19++;
		}
	}

	if (digitalRead(bgr) == 0)
	{
		w19 = 0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

			randNumber = random(vr500); // 0から299の乱数を生成
			q19 = random(0, 17);
			q18 = random(0, 17);
			q17 = random(0, 17);
			if (randNumber == 7)
				strip.setPixelColor(w19, r[w19], g[w19] = q17 * 15, b[w19]);
			if (randNumber == 1)
				strip.setPixelColor(w19, r[w19], g[w19] = q18 * 15, b[w19]);
			if (randNumber == 2)
				strip.setPixelColor(w19, r[w19], g[w19] = q19 * 15, b[w19]);
			if (randNumber == 3)
				strip.setPixelColor(w19, r[w19], g[w19] = q19 * 15, b[w19]);
			if (randNumber == 5)
				strip.setPixelColor(w19, r[w19], g[w19] = q18 * 15, b[w19]);
			if (randNumber == 4)
				strip.setPixelColor(w19, r[w19], g[w19] = q17 * 15, b[w19]);
			if (randNumber == 6)
				strip.setPixelColor(w19, r[w19], g[w19] = q18 * 15, b[w19]);

			w19++;
		}
	}
	if (digitalRead(bbl) == 0)
	{
		w19 = 0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

			randNumber = random(vr500); // 0から299の乱数を生成
			q19 = random(0, 17);
			q18 = random(0, 17);
			q17 = random(0, 17);
			if (randNumber == 7)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q17 * 15);
			if (randNumber == 1)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q18 * 15);
			if (randNumber == 2)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q19 * 15);
			if (randNumber == 3)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q19 * 15);
			if (randNumber == 5)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q18 * 15);
			if (randNumber == 4)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q17 * 15);
			if (randNumber == 6)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q18 * 15);

			w19++;
		}
	}

	if (digitalRead(b2) == 0)
	{
		w19 = 0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

			randNumber = random(vr500); // 0から299の乱数を生成
			q19 = random(0, 17);
			q18 = random(0, 17);
			q17 = random(0, 17);
			if (randNumber == 7)
				strip.setPixelColor(w19, r[w19], g[w19], b[w19] = q19 * 15);
			if (randNumber == 1)
				strip.setPixelColor(w19, r[w19], g[w19] = q18 * 15, b[w19]);
			if (randNumber == 2)
				strip.setPixelColor(w19, r[w19], g[w19] = q17 * 15, b[w19] = q17 * 15);
			if (randNumber == 3)
				strip.setPixelColor(w19, r[w19] = q19 * 15, g[w19], b[w19]);
			if (randNumber == 5)
				strip.setPixelColor(w19, r[w19] = q18 * 15, g[w19], b[w19] = q18 * 15);
			if (randNumber == 4)
				strip.setPixelColor(w19, r[w19] = q17 * 15, g[w19] = q18 * 15, b[w19]);
			if (randNumber == 6)
				strip.setPixelColor(w19, r[w19] = q18 * 15, g[w19] = q17 * 15, b[w19] = q19 * 15);

			w19++;
		}
	}

	w19 = 22;
	q19 = random(0, 2);
	q18 = random(0, 2);
	q17 = random(0, 2);
	while (w19 + 1 < 100)
	{
		if (r[w19] > 1)
			if (q19 == 0)
				r[w19] -= 15;
		if (g[w19] > 1)
			if (q18 == 0)
				g[w19] -= 15;
		if (b[w19] > 1)
			if (q17 == 0)
				b[w19] -= 15;
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

		w19--;
	}

	delay(bar16 * bar16 + 1);
	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void chain()
{
	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		w19++;
	}
	strip.show();
	delay(bar16 * bar16 + 1);
}

void rainbowCycle(uint8_t wait)
{
	uint32_t Wheel(byte WheelPos);
	uint16_t i,j;

	for (j = 0; j < 256 * 1; j++){ // 5 cycles of all colors on wheel
		for (i = 0; i < strip.numPixels(); i++){
			strip.setPixelColor(22 - i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
		}
		strip.show();
		delay(wait);
	}
}

uint32_t Wheel(byte WheelPos)
{
	if (WheelPos < 85)
	{
		return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
	}
	else if (WheelPos < 170)
	{
		WheelPos -= 85;
		return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
	}
	else
	{
		WheelPos -= 170;
		return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
	}
}

	void color8()
{
	w19 = 22;
	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	while (w19 > 0)
	{
		strip.setPixelColor(w19, Wheel(bar255));
		w19--;
	}
}

	void color9()
{

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0], b[0]);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0], g[0] = h, b[0]);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0], g[0], b[0] = h);
			u7++;
		} //else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, 0, 0, 0);
			if (vr2255 > 250)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void color9bcn()
{

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= 40);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);
			u7++;
		} 
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		
		
		
		
		//else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, 0, 0, 0);
			if (vr2255 > 250)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void color9_2()
{

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			if(rcnt++<2) {strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= 0);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); rcnt=0;}
			// else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); if(rcnt++>2)rcnt=0;}
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			if(gcnt++<2) {strip.setPixelColor(0, r[0]= 0, g[0] = h, b[0]= 0);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); gcnt=0;}

						// strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			if(bcnt++<2) {strip.setPixelColor(0, r[0]= 0, g[0]= 0, b[0] = h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); bcnt=0;}
			
			// strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);
			u7++;
		} 
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{

			if(ycnt++<2) {strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); ycnt=0;}

			// strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			if(mcnt++<2) {strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); mcnt=0;}

			// strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			if(ccnt++<2) {strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); ccnt=0;}


			// strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			if(wcnt++<2) {strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); wcnt=0;}


			// strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		
		
		
		
		//else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{

			
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, 0, 0, 0);
			if (vr2255 > 250)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void color9bcn2()
{

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			if(rcnt++<2) {strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= 40);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); rcnt=0;}
			// else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); if(rcnt++>2)rcnt=0;}
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			if(gcnt++<2) {strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); gcnt=0;}

						// strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			if(bcnt++<2) {strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); bcnt=0;}
			
			// strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);
			u7++;
		} 
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{

			if(ycnt++<2) {strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); ycnt=0;}

			// strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			if(mcnt++<2) {strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); mcnt=0;}

			// strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			if(ccnt++<2) {strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); ccnt=0;}


			// strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			if(wcnt++<2) {strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);}
			else {strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); wcnt=0;}


			// strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		
		
		
		
		//else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{

			if(rcnt++<5) {
				strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);}
			else {
				q19 = random(0, 4);
				q18 = random(0, 4);
				q17 = random(0, 4);				
				strip.setPixelColor(0, r[0] = 0, g[0]= 0, b[0]= 0); 
				rcnt=0;}

			// q19 = random(0, 4);
			// q18 = random(0, 4);
			// q17 = random(0, 4);
			// strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, 0, 0, 0);
			if (vr2255 > 250)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void color9bcnW()
{

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			if(rcnt++<4) {strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= 40);}
			else {strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= h); rcnt=0;}
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{

			if(gcnt++<5) {strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);}
			else {strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= h); gcnt=0;}

						// strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{

			if(bcnt++<6) {strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);}
			else {strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= h); bcnt=0;}
			
			// strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);
			u7++;
		} 
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		
		
		
		
		//else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, 0, 0, 0);
			if (vr2255 > 250)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}


void color9bcnSiro()
{

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= 40);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0]= 20, g[0] = h, b[0]= 80);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= 120, g[0]= 0, b[0] = h);
			u7++;
		} 
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= h, b[0]= 0);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= 0, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= 0 , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		if (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= h , g[0]= h, b[0]= h);
			u9++;
		} //else u9=0;
		
		
		
		
		//else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	
			// if(cnt=3)
			// {		
			// 	r[w19] = r[w19 - 1];
			// 	g[w19] = g[w19 - 1];
			// 	b[w19] = b[w19 - 1];
			// 	w19--;
			// }

	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, 0, 0, 0);
			if (vr2255 > 250)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void setPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, 255, 255, heatramp);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel, 255, heatramp, 0);
  } else {                               // coolest
    strip.setPixelColor(Pixel, heatramp, 0, 0);
  }
}

void RsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, 255, 255, heatramp);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel, 255, heatramp, 0);
  } else {                               // coolest
    strip.setPixelColor(Pixel, heatramp, 0, 0);
  }
}

void GsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, heatramp, 255, 255);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel, 0,255,  heatramp);
  } else {                               // coolest
    strip.setPixelColor(Pixel,0, heatramp,0);
  }
}

void BsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, 255, heatramp, 255);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel, 0, heatramp, 255);
  } else {                               // coolest
    strip.setPixelColor(Pixel,  0, 0, heatramp);
  }
}

void YsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, 255, 255, heatramp);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel, 255, heatramp, 0);
  } else {                               // coolest
    strip.setPixelColor(Pixel,  heatramp, heatramp, 0);
  }
}

void CsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, heatramp, 255, 255);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel,0, heatramp, 255);
  } else {                               // coolest
    strip.setPixelColor(Pixel, 0,  heatramp, heatramp);
  }
}

void PsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, 255,heatramp, 125);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel,255,0,  heatramp/2);
  } else {                               // coolest
    strip.setPixelColor(Pixel, heatramp,0,  heatramp/2);
  }
}

void MsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, 125,heatramp, 255);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel,heatramp/2,0,  255);
  } else {                               // coolest
    strip.setPixelColor(Pixel, heatramp/2,0,  heatramp);
  }
}

void WsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
 
  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, h,h, h);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel,h,h,heatramp);
  } else {                               // coolest
    strip.setPixelColor(Pixel, heatramp/2,heatramp/2,  heatramp/2);
  }
}

void FULLsetPixelHeatColor (int Pixel, byte temperature) {
  // Scale 'heat' down from 0-255 to 0-191
  byte t192 = round((temperature/255.0)*191);
  
  byte rr=0;
  byte rg=0;
  byte rb=0;

   rr=random(2);
   rg=random(2);
   if((rr==1) && (rg==1)) rb=random(2);
  

  // calculate ramp up from
  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
 
  // figure out which third of the spectrum we're in:
  if( t192 > 0x80) {                     // hottest
    strip.setPixelColor(Pixel, rr*h,rg*h, rb*h);
  } else if( t192 > 0x40 ) {             // middle
    strip.setPixelColor(Pixel,rr*heatramp,rg*heatramp,rb*heatramp);
  } else {                               // coolest
    strip.setPixelColor(Pixel,rr*heatramp/2,rg*heatramp/2,  rb*heatramp/2);
  }
}

void FULLFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    FULLsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void Fire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    setPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void GFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    GsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void BFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    BsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void YFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    YsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void CFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    CsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void RFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    RsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}



void PFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    PsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void MFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    MsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void WFire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  
  // Step 1.  Cool down every cell a little
  for( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);
    
    if(cooldown>heat[i]) {
      heat[i]=0;
    } else {
      heat[i]=heat[i]-cooldown;
    }
  }
  
  // Step 2.  Heat from each cell drifts 'up' and diffuses a little
  for( int k= NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }
    
  // Step 3.  Randomly ignite new 'sparks' near the bottom
  if( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160,255);
    //heat[y] = random(160,255);
  }

  // Step 4.  Convert heat to LED colors
  for( int j = 0; j < NUM_LEDS; j++) {
    WsetPixelHeatColor(j, heat[j] );
  }

  strip.show();
  delay(SpeedDelay);
}

void color10()

{

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
	 rndr = random(0, 5) * 15;
	 rndg = random(0, 5) * 15;
	 rndb = random(0, 5) * 15;
	}

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= rndg, b[0]= rndb);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0]= rndr, g[0] = h, b[0]= rndb);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= rndr, g[0]= rndg, b[0] = h);
			u7++;
		} //else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		while (digitalRead(b1) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 85, g[0] = q18 * 85, b[0] = q17 * 85);
			strip.show();
			delay(bar16 * bar16 + 1);
		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{
		r[w19] = r[w19 - 1];
		g[w19] = g[w19 - 1];
		b[w19] = b[w19 - 1];
		w19--;
	}
	while (w19 < 23)
	{
		strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		{
			strip.setPixelColor(w19, Wheel(vr2255));
			if (vr2255 < 5)
				strip.setPixelColor(w19, h, h, h);
		}

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

void color11()
{

	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1){
	 rndr = random(0, 5) * 15;
	 rndg = random(0, 5) * 15;
	 rndb = random(0, 5) * 15;
	}

	r[0] = 0;
	g[0] = 0;
	b[0] = 0;
	w19 = 22;
	//    while(w19>0){
	//     if(r[w19]==0&&g[w19]==0&&b[w19]==0)
	//      strip.setPixelColor(w19, Wheel(vr2255));
	//    w19--;}strip.show();

	w18 = 0;
	while (w18 < 23)
	{
		if (digitalRead(bre) == 0)
		{
			strip.setPixelColor(0, r[0] = h, g[0]= rndg, b[0]= rndb);
			u9++;
		} //else u9=0;
		if (digitalRead(bgr) == 0)
		{
			strip.setPixelColor(0, r[0]= rndr, g[0] = h, b[0]= rndb);
			uu8++;
		} //else uu8=0;
		if (digitalRead(bbl) == 0)
		{
			strip.setPixelColor(0, r[0]= rndr, g[0]= rndg, b[0] = h);
			u7++;
		} //else u7=0;
		//if(digitalRead(b2)==0){q18=random(0,7);strip.setPixelColor(0,r[0]=rb[q18],g[0]=gb[q18],b[0]=bb[q18]);}
		//if(digitalRead(b2)==0){q18=random(0,12);strip.setPixelColor(0,r[0]=log10(ra[q18])*ra[q18]/2,g[0]=log10(ga[q18])*ga[q18]/2,b[0]=log10(ba[q18])*ba[q18]/2);}
		if (digitalRead(b2) == 0)
		{
			q19 = random(0, 4);
			q18 = random(0, 4);
			q17 = random(0, 4);
			strip.setPixelColor(0, r[0] = q19 * 80, g[0] = q18 * 80, b[0] = q17 * 80);
		}

		if (digitalRead(b1) == 0)
		{
			
			if(fue1<32) fue1+=1; else {fue1=0;}
			rcol[0]=(2048*fue1);
			strip.setPixelColor(0, strip.ColorHSV(rcol[0],sat[0],(val[0]+i9<255) ? val[0]+=i9 : val[0]));
			delay(bar16 * bar16 + 1);			

		}

		//    while(digitalRead(b1)==LOW){w15=random(0,7);w14=rb[w15];w13=gb[w15];w12=bb[w15];
		//    strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]); strip.show();delay(5*bar16*bar16+1);}
		delay(bar16 + 1);
		w18++;
	}

	//    if(u9>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=0,g[0]=h,b[0]=h);u9-=vr500;}
	//
	//if(uu8>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=0,b[0]=h);uu8-=vr500;}
	//
	//if(u7>1000){ q19=random(0,17);q18=random(0,17);q17=random(0,17);
	//strip.setPixelColor(0,r[0]=h,g[0]=h,b[0]=0);u7-=vr500;}
	//if(digitalRead(b4)==0){w15=random(0,7);strip.setPixelColor(0,r[0]=rb[w15],g[0]=gb[w15],b[0]=bb[w15]);}

	//while(digitalRead(b2)==0)
	//{
	//q18=random(0,7);
	//strip.setPixelColor(0,rb[q18],gb[q18],bb[q18]);
	////if(q19>12)q19=0; else q19++;
	//r[0]=rb[q18];g[0]=gb[q18];b[0]=bb[q18];
	//w17=9;
	//while(w17>0){
	//r[w17]=r[w17-1];g[w17]=g[w17-1];b[w17]=b[w17-1];w17--;}
	//while(w17<10){
	//strip.setPixelColor(w17,r[w17],g[w17],b[w17]);w17++;}
	//strip.show();delay(5*bar16*bar16+1);
	////Serial.print(w17);Serial.println(q19);
	//}

	w19 = 22;
	while (w19 > 0)
	{

		rcol[w19] = rcol[w19 - 1];
		sat[w19] = sat[w19 - 1];
		val[w19] = val[w19 - 1];

		// r[w19] = r[w19 - 1];
		// g[w19] = g[w19 - 1];
		// b[w19] = b[w19 - 1];

		w19--;
	}
	while (w19 < 23)
	{

		strip.setPixelColor(w19, strip.ColorHSV(rcol[w19],sat[w19],val[w19]));
		
		// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);
		// if (r[w19] == 0 && g[w19] == 0 && b[w19] == 0)
		// {
		// 	strip.setPixelColor(w19, Wheel(vr2255));
		// 	if (vr2255 < 5)
		// 		strip.setPixelColor(w19, h, h, h);
		// }

		w19++;
	}
	delay(bar16 * bar16 + 1);

	//w19=0,w18=0,w17=0,q19=0,q18=0,q17=0;
}

	void color7()
{

	strip.setPixelColor(22, Wheel(bar255));

	if (digitalRead(bre) == 0)
	{
		if (w19 == 0)
			w19 = 22;
		if (w19 > 0)
		{
			strip.setPixelColor(w19, Wheel(bar255));
			w19--;
			delay(100);
		}
	}

	if (digitalRead(bbl) == 0)
	{
		if (w19 == 0)
			w19 = 22;
		if (w19 > 0)
		{
			strip.setPixelColor(w19, 0);
			w19--;
			delay(100);
		}
	}

	if (digitalRead(bgr) == 0)
	{
		if (w19 == 0)
			w19 = 22;
		if (w19 > 0)
		{
			strip.setPixelColor(w19, h, h, h);
			w19--;
			delay(100);
		}
	}

	//   if(digitalRead(bre)==0)
	//   {
	//   w19=22;
	//    while(w19>0){
	//    bb[w19]=bb[w19-1];
	//    w19--;}
	//    while(w19<23){
	//    strip.setPixelColor(w19,Wheel(bb[w19]));
	//    w19++;}
	//
	//    strip.show();
	//    delay(10);
	//
	//
	//
	//   }

	strip.show();
}


void HalloweenEyes(byte red, byte green, byte blue, 
                   int EyeWidth, int EyeSpace, 
                   boolean Fade, int Steps, int FadeDelay,
                   int EndPause)
				   {
  randomSeed(analogRead(0));
  
  int i;
  int StartPoint  = random( 0, NUM_LEDS - (2*EyeWidth) - EyeSpace );
  int Start2ndEye = StartPoint + EyeWidth + EyeSpace;
  
  for(i = 0; i < EyeWidth; i++) {
    strip.setPixelColor(StartPoint + i, red, green, blue);
    strip.setPixelColor(Start2ndEye + i, red, green, blue);
  }
  
  strip.show();
  
  if(Fade==true) {
    float r, g, b;
  
    for(int j = Steps; j >= 0; j--) {
      r = j*(red/Steps);
      g = j*(green/Steps);
      b = j*(blue/Steps);
      
      for(i = 0; i < EyeWidth; i++) {
        strip.setPixelColor(StartPoint + i, r, g, b);
        strip.setPixelColor(Start2ndEye + i, r, g, b);
      }
      
    strip.show();
      delay(FadeDelay);
    }
  }
				   }
				   
void CylonBounce(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay)
{

  for(int i = 0; i < NUM_LEDS-EyeSize-2; i++) {
    strip.setPixelColor(i,0,0,0);
    strip.setPixelColor(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(i+j, red, green, blue); 
    }
    strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }

  delay(ReturnDelay);

  for(int i = NUM_LEDS-EyeSize-2; i > 0; i--) {
    strip.setPixelColor(i,0,0,0);
    strip.setPixelColor(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(i+j, red, green, blue); 
    }
    strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    strip.show();
    delay(bar255);
  }
  
  delay(bar255);
}

void BouncingColoredBalls(int BallCount, byte colors[][3], boolean continuous) {
  float Gravity = -9.81;
  int StartHeight = 1;
  
  float Height[BallCount];
  float ImpactVelocityStart = sqrt( -2 * Gravity * StartHeight );
  float ImpactVelocity[BallCount];
  float TimeSinceLastBounce[BallCount];
  int   Position[BallCount];
  long  ClockTimeSinceLastBounce[BallCount];
  float Dampening[BallCount];
  boolean ballBouncing[BallCount];
  boolean ballsStillBouncing = true;
  
  for (int i = 0 ; i < BallCount ; i++) {   
    ClockTimeSinceLastBounce[i] = millis();
    Height[i] = StartHeight;
    Position[i] = 0; 
    ImpactVelocity[i] = ImpactVelocityStart;
    TimeSinceLastBounce[i] = 0;
    Dampening[i] = 0.90 - float(i)/pow(BallCount,2);
    ballBouncing[i]=true; 
  }

  while (ballsStillBouncing) {
    for (int i = 0 ; i < BallCount ; i++) {
      TimeSinceLastBounce[i] =  millis() - ClockTimeSinceLastBounce[i];
      Height[i] = 0.5 * Gravity * pow( TimeSinceLastBounce[i]/1000 , 2.0 ) + ImpactVelocity[i] * TimeSinceLastBounce[i]/1000;
  
      if ( Height[i] < 0 ) {                      
        Height[i] = 0;
        ImpactVelocity[i] = Dampening[i] * ImpactVelocity[i];
        ClockTimeSinceLastBounce[i] = millis();
  
        if ( ImpactVelocity[i] < 0.01 ) {
          if (continuous) {
            ImpactVelocity[i] = ImpactVelocityStart;
          } else {
            ballBouncing[i]=false;
          }
        }
      }
      Position[i] = round( Height[i] * (NUM_LEDS - 1) / StartHeight);
    }

    ballsStillBouncing = false; // assume no balls bouncing
    for (int i = 0 ; i < BallCount ; i++) {
      strip.setPixelColor(Position[i],colors[i][0],colors[i][1],colors[i][2]);
      if ( ballBouncing[i] ) {
        ballsStillBouncing = true;
      }
    }
    
    strip.show();
	  for(int i = NUM_LEDS-1; i >= 0; i--) {

    strip.setPixelColor(i,0,0,0);
	  }
  }
}

// used by meteorrain
void fadeToBlack(int ledNo, byte fadeValue) {
 #ifdef ADAFRUIT_NEOPIXEL_H 
    // NeoPixel
    uint32_t oldColor;
    uint8_t r, g, b;
    int value;
    
    oldColor = strip.getPixelColor(ledNo);
    r = (oldColor & 0x00ff0000UL) >> 16;
    g = (oldColor & 0x0000ff00UL) >> 8;
    b = (oldColor & 0x000000ffUL);

    r=(r<=10)? 0 : (int) r-(r*fadeValue/256);
    g=(g<=10)? 0 : (int) g-(g*fadeValue/256);
    b=(b<=10)? 0 : (int) b-(b*fadeValue/256);
    
    strip.setPixelColor(ledNo, r,g,b);
 #endif
 #ifndef ADAFRUIT_NEOPIXEL_H
   // FastLED
   leds[ledNo].fadeToBlackBy( fadeValue );
 #endif  
}

void meteorRain(byte red, byte green, byte blue, byte meteorSize, byte meteorTrailDecay, boolean meteorRandomDecay, int SpeedDelay) {  
  for(int i = 0; i < NUM_LEDS; i++ ) {
    strip.setPixelColor(i, 0, 0, 0); 
  }
strip.show();
  
  for(int i = 0; i < NUM_LEDS+NUM_LEDS; i++) {
    
    
    // fade brightness all LEDs one step
    for(int j=0; j<NUM_LEDS; j++) {
      if( (!meteorRandomDecay) || (random(10)>5) ) {
        fadeToBlack(j, meteorTrailDecay );        
      }
    }
    
    // draw meteor
    for(int j = 0; j < meteorSize; j++) {
      if( ( i-j <NUM_LEDS) && (i-j>=0) ) {
         strip.setPixelColor(i-j, red, green, blue);
      } 
    }
   
strip.show();
    delay(SpeedDelay);
  }
}


void theaterChase(byte red, byte green, byte blue, int SpeedDelay) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < NUM_LEDS; i=i+3) {
        strip.setPixelColor(i+q, red, green, blue);    //turn every third pixel on
      }
      strip.show();
     
      delay(SpeedDelay);
     
      for (int i=0; i < NUM_LEDS; i=i+3) {
        strip.setPixelColor(i+q, 0,0,0);        //turn every third pixel off
      }
    }
  }
}

void theaterChaseRainbow(int SpeedDelay) {
  byte *c;
  
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
        for (int i=0; i < NUM_LEDS; i=i+3) {
          c = Wheel( (i+j) % 255);
          strip.setPixelColor(i+q, *c, *(c+1), *(c+2));    //turn every third pixel on
        }
        strip.show();
       
        delay(SpeedDelay);
       
        for (int i=0; i < NUM_LEDS; i=i+3) {
          strip.setPixelColor(i+q, 0,0,0);        //turn every third pixel off
        }
    }
  }
}


void Fire1(){
		if (digitalRead(bre) == 0)
		{
			RFire(55,120,20);
		} 
		if (digitalRead(bgr) == 0)
		{
			GFire(55,120,20);
		} 
		if (digitalRead(bbl) == 0)
		{
			BFire(55,120,20);
		} 

		if (digitalRead(b1) == 0)
		{
			WFire(55,120,20);
		} 


		while (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{
			YFire(55,120,20);
		} 
		while (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			PFire(55,120,20);
		} 
		while (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			CFire(55,120,20);
		} 
		// while (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		// {
		// 	WFire(55,120,20);
		// } 

		while (digitalRead(b1) == 0){
			Fire(55,120,20);
		} 

	while (digitalRead(b2) == 0){ 
		WFire(55,120,20);
		// theaterChaseRainbow(50);
	}


	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1)
	{
		w19=0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, 0,0,0);
			// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

			// if(vr21024<1020){
			// 	if(r[w19]==h ||g[w19]==h || b[w19]==h){
			// 		randNumber = random(vr5000); // 0から299の乱数を生成
			// 		if(randNumber==7)strip.setPixelColor(w19,0,0,h);
			// 		if(randNumber==1)strip.setPixelColor(w19,0,h,0);
			// 		if(randNumber==2)strip.setPixelColor(w19,0,h,h);
			// 		if(randNumber==3)strip.setPixelColor(w19,h,0,0);
			// 		if(randNumber==5)strip.setPixelColor(w19,h,0,h);
			// 		if(randNumber==4)strip.setPixelColor(w19,h,h,0);
			// 		if(randNumber==6)strip.setPixelColor(w19,h,h,h);
			// 	}
			// }

			w19++;
		}
		// delay(bar16 * bar16 + 1);

	}
	
}

void Firebcn(){
		if (digitalRead(bre) == 0)
		{
			PFire(55,120,20);
		} 
		if (digitalRead(bgr) == 0)
		{
			GFire(55,120,20);
		} 
		if (digitalRead(bbl) == 0)
		{
			MFire(55,120,20);
		} 
		while (digitalRead(bre) == 0 && digitalRead(bgr) == 0)
		{
			YFire(55,120,20);
		} 
		while (digitalRead(bre) == 0 && digitalRead(bbl) == 0)
		{
			WFire(55,120,20);
		} 
		while (digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		{
			CFire(55,120,20);
		} 
		// while (digitalRead(bre) == 0 && digitalRead(bgr) == 0 && digitalRead(bbl) == 0)
		// {
		// 	Fire(55,120,20);
		// } 

		while (digitalRead(b1) == 0){
			FULLFire(55,120,20);
		} 

		while (digitalRead(b2) == 0){ 
			Fire(55,120,20);
			// theaterChaseRainbow(50);
		}
		
	if (digitalRead(bre) == 1 && digitalRead(bgr) == 1 && digitalRead(bbl) == 1)
	{
		w19=0;
		while (w19 < 23)
		{
			strip.setPixelColor(w19, 0,0,0);
			// strip.setPixelColor(w19, r[w19], g[w19], b[w19]);

			// if(vr21024<1020){
			// 	if(r[w19]==h ||g[w19]==h || b[w19]==h){
			// 		randNumber = random(vr5000); // 0から299の乱数を生成
			// 		if(randNumber==7)strip.setPixelColor(w19,0,0,h);
			// 		if(randNumber==1)strip.setPixelColor(w19,0,h,0);
			// 		if(randNumber==2)strip.setPixelColor(w19,0,h,h);
			// 		if(randNumber==3)strip.setPixelColor(w19,h,0,0);
			// 		if(randNumber==5)strip.setPixelColor(w19,h,0,h);
			// 		if(randNumber==4)strip.setPixelColor(w19,h,h,0);
			// 		if(randNumber==6)strip.setPixelColor(w19,h,h,h);
			// 	}
			// }
			w19++;
		}
		// delay(bar16 * bar16 + 1);

	}
	
}
