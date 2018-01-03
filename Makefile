
Centre\ Mouse.app/Contents/MacOS/Centre\ Mouse: out/centre-mouse
	mkdir -p "Centre Mouse.app/Contents/MacOS"
	cp $< "$@"

out/centre-mouse: centre-mouse.cpp
	mkdir -p $(@D)
	$(CC) -o $@ -O3 -Wall -Wextra -std=c++14 -framework Carbon $<
