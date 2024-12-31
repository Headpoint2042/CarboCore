#pragma once
#include "CarboCore.h"


class Sandbox : public CarboCore::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

CarboCore::Application* CarboCore::CreateApplication() {
	return new Sandbox();
}