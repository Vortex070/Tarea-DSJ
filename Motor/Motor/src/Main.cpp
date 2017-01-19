#include "..\include\Libraries.h"

MemoryManager& memory = MemoryManager::instance();
FileSystemManager& file = FileSystemManager::instance();
VideoManager& video = VideoManager::instance();
AudioManager& audio = AudioManager::instance();
TextureManager& texture = TextureManager::instance();
RenderManager& render = RenderManager::instance();
AnimationManager& animate = AnimationManager::instance();
PhysicsDynamicsManager& physicsDynamic = PhysicsDynamicsManager::instance();
PhysicsManager& physics = PhysicsManager::instance();
InputManager& input = InputManager::instance();
UpdateManager& update = UpdateManager::instance();

void StartUp();
void Run();
void ShutDown();

void main()
{
	StartUp();
	Run();
	ShutDown();
}

void StartUp()
{
	cout << "----Start----" << endl;
	memory.Start();
	file.Start();
	video.Start();
	audio.Start();
	texture.Start();
	render.Start();
	animate.Start();
	physicsDynamic.Start();
	physics.Start();
	input.Start();
	update.Start();
}

void Run()
{
	bool end = false;

	while (end == false)
	{
		cout << "----Run----" << endl;
		memory.Run();
		file.Run();
		video.Run();
		audio.Run();
		texture.Run();
		render.Run();
		animate.Run();
		physicsDynamic.Run();
		physics.Run();
		input.Run();
		update.Run();

		if (GetAsyncKeyState(VK_ESCAPE))
		{
			end = true;
		}
	}
	
}

void ShutDown()
{
	cout << "----Shut Down-----" << endl;
	update.ShutDown();
	input.ShutDown();
	physics.ShutDown();
	physicsDynamic.ShutDown();
	animate.ShutDown();
	render.ShutDown();
	texture.ShutDown();
	audio.ShutDown();
	video.ShutDown();
	file.ShutDown();
	memory.ShutDown();
}
		