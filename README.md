# Temperature-Controlled-Fan
#### Video Demo:  <https://youtu.be/VkHgrDoNkas>
#### Description:
  On my project, I decided to to create something that i'm interested in.
  I bought an Aruduino a while ago and wanted to create something exciting out of it and never got the time to do it, So given the oppotuinity to create a final project for this course seemed like the right opportuinity to get my hands dirty.
  For my project i've built a temperature controlled fan which nowadays is used inside laptops, Refrigerators, Air Conditioners and all sort of stuff that requires cooling, I've made a simple one using a dht11 sensor that i got in the kit.
  The things i needed to build this was a DHT11 sensor, a DC Motor, LCD, Power Supply Module, a 9v battery and a motor control module, Again everything was included in the kit.
  I learnt about electronics by watching several youtube videos and some online courses on arduino and managed to get good grasp on how electronics work and how i can use them to solve the problems we face by using electronics, I wired everything up and fortunately it was all running smoothly
  Then comes the coding phase, it was the most easiest task in this project because previously in cs50's problem sets.. the problems i have solved were lot more complicated than reading some values from a sensor and using them.
  I used two libraries DHT.h and LiquidCrystal.h,
  
  One for the LCD which shows the temperature in ferenheit and Speed of the motor by analog voltage.
  And the other for the motor for setting up it's direction and speed.
  
  After that comes the difficult part where i had to change to motor speed according to the rise and fall in temperature, My first thoughts were to use million of "if" statements which i instantly realized was a wrong approach.
  after searching around for hours i came across an articel where i read about maths being used in electronics,
  the solution to my problem i was facing was coming up with a mathematical equation that can give me the speed i want based on the readings i was getting from the sensor and..
  I learnt linear equations which beatifully solved that problem with just one line of code and it looked soo much cleaner too. looking forward to learn more maths and excel in my electronic engineering journey
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
