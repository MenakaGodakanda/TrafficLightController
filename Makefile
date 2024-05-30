CC = gcc
CFLAGS = -I./include -pthread
DEPS = traffic_light.h
OBJ = src/main.o src/traffic_light.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

TrafficLightController: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f src/*.o TrafficLightController
