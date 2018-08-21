struct Camera : public Component
{
	int viewPortWidth; // In pixels
	int viewPortHeight; // In pixels
	
	// Camera entities should also have a position component which is the pixel 
	// location of the top left corner of the camera viewport
}