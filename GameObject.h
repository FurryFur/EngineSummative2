class GameObject
{
public:
	std::vector<GameObject> childObjects;

private:
	GameObject* parent;
	std::vector<Components*> components;

	GameObject* getParent();

	template<typename T>
	Component<T> getComponent();
}
