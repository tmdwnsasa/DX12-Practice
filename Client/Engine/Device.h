#pragma once


// �η� �繫��

class Device
{
public:
	void Init();

	ComPtr<IDXGIFactory> GetDXGI() { return _dxgi; };
	ComPtr<ID3D12Device> GetDevice() { return _device; };



private:
	// Com(Component Object Model)
	// DX�� ���α׷��� ��� �������� ���� ȣȯ���� �����ϰ� �ϴ� ���
	// Com ��ü(Com �������̽�)�� ���, ���λ����� �����ڿ��� ������
	// ComPtr�� ������ ����Ʈ ������ 
	ComPtr<ID3D12Debug>		_debugController;
	ComPtr<IDXGIFactory>	_dxgi;				//ȭ�� ���� ���
	ComPtr<ID3D12Device>	_device;			//���� ��ü ����
};

