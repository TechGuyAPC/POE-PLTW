#pragma config(Sensor, in1,    LF,             sensorLineFollower)
#pragma config(Motor,  port2,           MotorA,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Servo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: Ball Sorter
Team Members: Zach K., Aedan C.
Date:
Section:


Task Description:Sort marbles based off of type into seperate containers (wood, steel, plastic)


Pseudocode:

*/


task main()
{                               //Program begins, insert code within curly braces
	int min;
	int homePos = 0; //home position for sorter arm

	while (1==1){
		//ball assist mover code
		startMotor(MotorA,13);
		if(SensorValue(LF)<2600){
			min=3000;

		}
		while(SensorValue(LF)<2600){
			if (SensorValue(LF)<min)
				min = SensorValue(LF);

		}
		if(min<140){
			setServo(Servo,homePos);
		}
		else{
			setServo(Servo,45);
		}
	}
}
