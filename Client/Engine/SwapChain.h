#pragma once

class SwapChain
{
public:
	void Init(const WindowInfo& info, ComPtr<IDXGIFactory> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue);

private:
	ComPtr<IDXGISwapChain>	_swapChain;
	ComPtr<ID3D12Resource>	_renderTargets[SWAP_CHAIN_BUFFER_COUNT];		//화면 버퍼 겟수
	uint32					_backBufferIndex = 0;
};

