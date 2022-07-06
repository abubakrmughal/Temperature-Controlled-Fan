# Temperature-Controlled-Fan
#### Video Demo:  <URL HERE>
#### Description:
  On my project, I decided to to create something that i'm interested in.
  I bought an Aruduino a while ago and wanted to create something exciting out of it and never got the time to do it.
  For my project i've built a temperature controlled fan which nowadays is used inside laptops, Refrigerators, Air Conditioners etc.
  The things i needed to build this was a DHT11 sensor, a DC Motor, LCD, Power Supply Module, a 9v battery and a motor control module.
  I learnt about electronics and wired everything up by watching youtube tutorials.
  Then comes the coding phase where i didn't have much problem thanks to cs50 because of the skills i've developed by it.
  I used two libraries DHT.h and LiquidCrystal.h to use those sensors and read their values on a variable.
  After that comes the difficult part where i had to change to motor speed according to the rise and fall in temperature, My first thoughts were to use million of "if" statements which i instantly realized was a wrong approach.
  I learnt linear equations which beatifully solved that problem with just one line of code (As Shown in the video).
  And That's ALL!!
  [Screenshot 2022-07-06 213104](https://user-images.githubusercontent.com/82281840/177618865-8682733b-975e-4286-a52a-8dd2d38b16b6.jpg)

  
        Finding The Slope of Line
            m=(y2-y1)/(x2-x1)
    m=(mSpeed2-Mspeed1)/(tempF2-tempF1)
  
    //Lowest and highest values of the sensors
    m=(255-140)/(122-55)
          115/67

			//Finding the equation for Motor Speed
  
      mSpeed-mSpeed1=m(tempF-tempF1)
			mSpeed-140=  m (tempF-55)¬¬¬XX
      mSpeed=(115/67)(tempF-55)+140
      mSpeed=(115/67)+45.6            //Final Equation
