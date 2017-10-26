#pragma once
//Class that holds the information about the room and can perform the calculations on it
class roomInfo {
public:
	float width;
	float depth;
	float height;
	float area() {
		return float(width*depth);
	}
	float paintRequired() {
		return float(1.1*(2 * (2 * width * height + 2 * depth * height - 1.509522)) / 10);
	}
	float volume() {
		return float(width*depth*height);
	}
};