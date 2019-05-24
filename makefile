main.out: main.o carro.o motor.o pintura.o chasis.o edificio.o
	g++ main.o carro.o motor.o chasis.o pintura.o edificio.o -o main.out

main.o: main.cpp Edificio.h Carro.h Motor.h Pintura.h Chasis.h
	g++ -c main.cpp

edificio.o: Edificio.cpp Edificio.h
	g++ -c Edificio.cpp

carro.o: Carro.cpp Carro.h Motor.h Pintura.h Chasis.h
	g++ -c Carro.cpp

motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp

pintura.o: Pintura.cpp Pintura.h
	g++ -c Pintura.cpp

chasis.o: Chasis.cpp Chasis.h
	g++ -c Chasis.cpp