
task main()
{
 untilBump(Touch);
	startMotor(RightMotor, 88);
	startMotor(LeftMotor,  -63);
	untilSonarLessThan(10, Input);
	stopMotor(RightMotor);
	stopMotor(LeftMotor);
		wait(5);
	startMotor(RightMotor,-70);
	startMotor(LeftMotor,80);
    wait(5);
  stopMotor(RightMotor);
  stopMotor(LeftMotor);



}
