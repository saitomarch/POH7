func datetimeFormat(hour: Int, _ minute: Int) -> String {
    var hourString = String(hour)
    var minuteString = String(minute)
    
    while (hourString.characters.count < 2) {
        hourString = "0" + hourString
    }
    while (minuteString.characters.count < 2) {
        minuteString = "0" + minuteString
    }
    return "\(hourString):\(minuteString)"
}

let days = Int(readLine()!)!
for day in 0..<days {
    let overworks = Int(readLine()!)!
    let hour = 60
    let dayHours = 24
    let minSleeps = 6 * hour
    let requireToSleeps = minSleeps + (overworks / 3)
    let wakeup = 7
    
    let hours = (dayHours + wakeup - ((requireToSleeps / hour) + ((requireToSleeps % hour) == 0 ? 0 : 1))) % dayHours
    let minutes = (requireToSleeps % hour) == 0 ? 0 : (hour - (requireToSleeps % hour))
    
    print(datetimeFormat(hours, minutes))
}

