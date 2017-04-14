#pragma once

#include "Common\StepTimer.h"
#include "Common\DeviceResources.h"
#include "Content\Sample3DSceneRenderer.h"
#include "DXSample.h"

using namespace DirectX;
using namespace Microsoft::WRL;
// Renders Direct3D content on the screen.
namespace App1
{
	class App1Main : public DXSample
	{
	public:
		App1Main();
		void CreateRenderers(const std::shared_ptr<DX::DeviceResources>& deviceResources);
		void Update();
		bool Render();

		void OnWindowSizeChanged();
		void OnSuspending();
		void OnResuming();
		void OnDeviceRemoved();

		App1Main(UINT width, UINT height, std::wstring name);
	
	
	
	private:
		// TODO: Replace with your own content renderers.
		std::unique_ptr<Sample3DSceneRenderer> m_sceneRenderer;

		static const UINT FrameCount = 2;
		
		// Rendering loop timer.
		DX::StepTimer m_timer;
	
		
		
	
	};
}