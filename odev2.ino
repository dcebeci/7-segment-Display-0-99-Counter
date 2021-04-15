int onlar=0;
int birler=0;
int gecikme=0;
int sayim=0;
int hiz_pin = A0;
int sayim_pin = A1;
int durum = 0;
int durum_pin = A2;

void setup()
{
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}
// Çıkış/giriş pinleri belirtildi.

void loop()
{

gecikme = analogRead(hiz_pin);
gecikme = map(gecikme,0,1023,300,1500); // delay 
sayim = analogRead(sayim_pin);
sayim = map(sayim,0,1023,1,10); //5den küçükse ++ ,5 den büyükse 99 dan geri sayım
durum = analogRead(durum_pin); //buton
durum = map(durum,0,1023,0,1); //buton map

if(durum==1)
{

if(sayim <= 5)
{
for (onlar = 0; onlar <= 9; onlar++)
{
disp_onlar(onlar);
for (birler = 0; birler <= 9; birler++)
{
disp_birler(birler);
delay(gecikme); 
}
}
}
else if(sayim > 5)
{
for (onlar = 9; onlar >= 0; onlar--)
{
disp_onlar(onlar);
for (birler = 9; birler >=0 ; birler--)
{
disp_birler(birler);
delay(gecikme); 
}
}
}

}


}



void disp_onlar(int onlar)
{
if( onlar == 0)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,LOW);//b
    digitalWrite(2,LOW);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,LOW);//e
    digitalWrite(5,LOW);//f
    digitalWrite(6,HIGH);//g
}

if( onlar == 1)
{
    digitalWrite(0,HIGH); //a
    digitalWrite(1,LOW);//b
    digitalWrite(2,LOW);//c
    digitalWrite(3,HIGH);//d
    digitalWrite(4,HIGH);//e
    digitalWrite(5,HIGH);//f
    digitalWrite(6,HIGH);//g
}

if( onlar == 2)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,LOW);//b
    digitalWrite(2,HIGH);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,LOW);//e
    digitalWrite(5,HIGH);//f
    digitalWrite(6,LOW);//g
}

if( onlar == 3)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,LOW);//b
    digitalWrite(2,LOW);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,HIGH);//e
    digitalWrite(5,HIGH);//f
    digitalWrite(6,LOW);//g
}

if( onlar == 4)
{
    digitalWrite(0,HIGH); //a
    digitalWrite(1,LOW);//b.
    digitalWrite(2,LOW);//c.
    digitalWrite(3,HIGH);//d
    digitalWrite(4,HIGH);//e
    digitalWrite(5,LOW);//f.
    digitalWrite(6,LOW);//g.
}

if( onlar == 5)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,HIGH);//b.
    digitalWrite(2,LOW);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,HIGH);//e.
    digitalWrite(5,LOW);//f
    digitalWrite(6,LOW);//g
}

if( onlar == 6)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,HIGH);//b.
    digitalWrite(2,LOW);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,LOW);//e.
    digitalWrite(5,LOW);//f
    digitalWrite(6,LOW);//g
}

if( onlar == 7)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,LOW);//b.
    digitalWrite(2,LOW);//c
    digitalWrite(3,HIGH);//d
    digitalWrite(4,HIGH);//e.
    digitalWrite(5,HIGH);//f
    digitalWrite(6,HIGH);//g
}

if( onlar == 8)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,LOW);//b
    digitalWrite(2,LOW);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,LOW);//e
    digitalWrite(5,LOW);//f
    digitalWrite(6,LOW);//g
}

if( onlar == 9)
{
    digitalWrite(0,LOW); //a
    digitalWrite(1,LOW);//b
    digitalWrite(2,LOW);//c
    digitalWrite(3,LOW);//d
    digitalWrite(4,HIGH);//e
    digitalWrite(5,LOW);//f
    digitalWrite(6,LOW);//g
}
}




void disp_birler( int birler)
{
if( birler == 0)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,LOW);//b
    digitalWrite(9,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,LOW);//e
    digitalWrite(12,LOW);//f
    digitalWrite(13,HIGH);//g
}
    
else if( birler == 1)
{
    digitalWrite(7,HIGH); //a
    digitalWrite(8,LOW);//b
    digitalWrite(9,LOW);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(11,HIGH);//e
    digitalWrite(12,HIGH);//f
    digitalWrite(13,HIGH);//g
}

else if( birler == 2)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,LOW);//b
    digitalWrite(9,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,LOW);//e
    digitalWrite(12,HIGH);//f
    digitalWrite(13,LOW);//g
}

else if( birler == 3)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,LOW);//b
    digitalWrite(9,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,HIGH);//e
    digitalWrite(12,HIGH);//f
    digitalWrite(13,LOW);//g
}

else if( birler == 4)
{
    digitalWrite(7,HIGH); //a
    digitalWrite(8,LOW);//b.
    digitalWrite(9,LOW);//c.
    digitalWrite(10,HIGH);//d
    digitalWrite(11,HIGH);//e
    digitalWrite(12,LOW);//f.
    digitalWrite(13,LOW);//g.
}

else if( birler == 5)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,HIGH);//b.
    digitalWrite(9,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,HIGH);//e.
    digitalWrite(12,LOW);//f
    digitalWrite(13,LOW);//g
}

else if( birler == 6)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,HIGH);//b.
    digitalWrite(9,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,LOW);//e.
    digitalWrite(12,LOW);//f
    digitalWrite(13,LOW);//g
}

else if( birler == 7)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,LOW);//b.
    digitalWrite(9,LOW);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(11,HIGH);//e.
    digitalWrite(12,HIGH);//f
    digitalWrite(13,HIGH);//g
}

else if( birler == 8)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,LOW);//b
    digitalWrite(9,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,LOW);//e
    digitalWrite(12,LOW);//f
    digitalWrite(13,LOW);//g
}

else if( birler == 9)
{
    digitalWrite(7,LOW); //a
    digitalWrite(8,LOW);//b
    digitalWrite(9,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(11,HIGH);//e
    digitalWrite(12,LOW);//f
    digitalWrite(13,LOW);//g
}
}