#pragma once

class View {
public:
	virtual ~View() = default;

public:
	virtual void show() = 0;
	virtual void close() = 0;
};
