class GameObject
{
public:
	std::vector<GameObject> childObjects;

	GameObject* getParent();

	// Returns a list of components with the specified type.
	// If this object does not have the specified component, then return an empty vector.
	template<typename T>
	std::vector<Component<T>*> getComponents();

	// Adds a component of type T to the game object.
	// Components should all have default constructors.
	// Provided Arguments are forwarded to the components overloaded constructor.
	template<typename T, typename... Args>
	void addComponent(Args&&... args);
private:
	GameObject* parent;
	std::vector<Components*> components;
}
