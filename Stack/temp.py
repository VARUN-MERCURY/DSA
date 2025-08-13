TOTAL_SEATS = 10
booked_seats = {2, 5, 9}

print("Welcome to the Theater! 🎟️")
print("--------------------------")

available_seats = []
for seat in range(1, TOTAL_SEATS + 1):
    if seat not in booked_seats:
        available_seats.append(str(seat))

print(f"Available seats are: {', '.join(available_seats)}")
print("--------------------------\n")

try:
    requested_seat = int(input("Please enter the seat number you want to book: "))

    if requested_seat > TOTAL_SEATS or requested_seat < 1:
        print("Invalid seat number! Please choose a seat between 1 and 10.")
    elif requested_seat in booked_seats:
        print(f"❌ Sorry! Seat number {requested_seat} is already booked.")
    else:
        print(f"✅ Great news! Seat {requested_seat} is available.")

except ValueError:
    print("Invalid input! Please enter a number only.")