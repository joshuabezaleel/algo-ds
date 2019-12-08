package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
)

func main() {
	fuelCounterUpper := 0

	file, err := os.Open("1.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		mass, err := strconv.Atoi(scanner.Text())
		if err != nil {
			log.Fatal(err)
		}

		fuelCounterUpper = fuelCounterUpper + ((mass / 3) - 2)
	}

	if err := scanner.Err(); err != nil {
		log.Fatal(err)
	}

	fmt.Println(fuelCounterUpper)
}
