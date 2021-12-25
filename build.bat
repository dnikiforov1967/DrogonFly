docker volume rm drogonfly
docker rmi drogonfly
mkdir build4docker
copy .\controllers\*.* build4docker\
copy .\main.cc build4docker\
copy .\Dockerfile build4docker\
cd build4docker
docker build -t drogonfly .
cd ..
