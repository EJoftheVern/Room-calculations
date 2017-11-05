// BorwellSoftwareChallenge
import java.io.*;
import java.util.Scanner;

public class BorwellSoftwareChallenge{
//doubleInput takes a string as an argument. This string is displayed as a message then the user is asked for input until they enter a number in the double format
public static double doubleInput(String userPrompt) {	
	Scanner sc = new Scanner(System.in);
	double result = 0;
	while (true) {
    System.out.println(userPrompt);
    try {
        result = Double.parseDouble(sc.next());
        break; 
    } catch (NumberFormatException ignore) {
        System.out.println("Invalid input");
    }	
}
return result;
}

//Main block of code takes in each dimension using the lofatInput function and assigns these values to the object room1
public static void main(String args[])
{
	RoomInfo room1 = new RoomInfo();
	room1.width = doubleInput("Enter the room width(metres) : ");	
	room1.depth = doubleInput("Enter the room depth(metres): ");
	room1.height = doubleInput("Enter the room height(metres): ");
	System.out.println( "The area(metres^2) is " + room1.area());
	System.out.println( "The amount of paint(litres) required to paint the room is:" + room1.paintRequired());
	System.out.println( "The volume(metres^3) of the room is " + room1.volume());
}
}