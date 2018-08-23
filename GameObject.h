class GameObject
{
public:
	std::vector<GameObject> childObjects;

	GameObject* getParent();

	// Gets a pointer to the component of type T.
	// If this object does not have the specified component, then return nullptr.
	template<typename T>
	Component<T>* getComponent();

	// Adds a component of type T to the game object.
	// Components should all have default constructors.
	// Provided Arguments are forwarded to the components overloaded constructor.
	template<typename T, typename... Args>
	void addComponent(Args&&... args);
private:
	GameObject* parent;
	std::vector<Components*> components;
}
