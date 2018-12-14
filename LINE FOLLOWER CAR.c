#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, dgtl1,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl3,  bumpSwitch,     sensorTouch)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port4,           rightMotor,    tmotorVex393_MC29, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

/*	untilBump(bumpSwitch);
startMotor(rightMotor, 64);
startMotor(leftMotor, 64);
lineTrackForTime(6, 3, in1, in2);
untilSonarLessThan(7,sonar);
wait(0.5);
stopMotor(rightMotor);
stopMotor(leftMotor);
wait(5);
startMotor(rightMotor,-64);
startMotor(leftMotor,-64);
lineTrackForTime(6,3,in1, in3);
stopMotor(rightMotor);
stopMotor(leftMotor);

*/
untilBump(bumpSwitch);
	startMotor(rightMotor, 88);
	startMotor(leftMotor,  63);
	untilSonarLessThan(10, sonar);
	stopMotor(rightMotor);
	stopMotor(leftMotor);
		wait(5);
	startMotor(rightMotor,70);
	startMotor(leftMotor,80);
    wait(5);
  stopMotor(rightMotor);
  stopMotor(leftMotor);
}
