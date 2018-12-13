
task main()
{
 untilBump(bumpSwitch);
	startMotor(rightMotor, 80);
	startMotor(leftMotor,  80); //reversed in motor config
	untilSonarLessThan(10, sonar); //once it reaches the wall @ 10 inches
	stopMotor(rightMotor);
	stopMotor(leftMotor);
		wait(5);
	startMotor(rightMotor,-70);
	startMotor(leftMotor,-70); //reversed in motor config
    wait(5);
  stopMotor(RightMotor);
  stopMotor(LeftMotor);



}
