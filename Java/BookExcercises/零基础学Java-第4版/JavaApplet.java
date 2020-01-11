/*************************************************************************
    > File Name: JavaApplet.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
import java.applet.Applet;
import java.awt.*;

public class JavaApplet extends Applet
{
	public void paint(Graphics g)
	{
		g.drawString("This is my first Applet!", 20, 10);
	}
}
