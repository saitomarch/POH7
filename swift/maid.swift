import Foundation
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
    
    print(String(format: "%02d:%02d", hours, minutes))
}

