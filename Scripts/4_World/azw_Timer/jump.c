modded class PlayerBase
{
	protected ref Timer m_MyTimer; // declaring the timer as a protected strong reference
	override void OnJumpStart()
    {
        super.OnJumpStart();   // call the original jump function so we don't break stuff

		if (!m_MyTimer)
			m_MyTimer = new Timer();  //create an instance of the Timer class

		m_MyTimer.Run(5.0, this, "HelloWorld", NULL, true); // run the timer to call HelloWorld() every five seconds
    }

	void HelloWorld() // function to spawn an object with a timed delay
	{
		Print("HelloWorld!");
	}
};





	