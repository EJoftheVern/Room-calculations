//Class that holds the information about the room and can perform the calculations on it
public class RoomInfo {
	//Establish the variables
	public double width;
	public double depth;
	public double height;	
	
	
	//return the area of the floor as a double
	public double area() {
		return width*depth;
	}
	
	//return the paint required to paint the walls of the room with 2 coats of paint
	public double paintRequired() {
		return (1.1*(2 * (2 * width * height + 2 * depth * height - 1.509522)) / 10);
	}
	
	//return the volume of the room
	public double volume() {
		return width*depth*height;
	}
}