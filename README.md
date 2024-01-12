# 获取日历数据
## 使用方法: 

```
Usage: calendar [options ...]

  Show the calendar data of the given date, or the current date if no date is given.
Options: Operation instruction,  if there is no instruction, defaults to the today date,
         and the output format is space-spaced calendar data.
  --date[date string],
   -d[date string]          Input date.
  --json, -j                Output calendar data in JSON format.
  --string, -s              Output calendar string.
  --version, -v             Output version information and exit.
  --help, -h, --help-ch     Display help information and exit.

date string: The date entered or the current date if not entered.
  format: YYYYMMDD
  range:
       YYYY: [1600, 6399]
         MM: [1, 12]
         DD: [1, max days]



Usage: calendar [options ...]

  显示给定日期的日历数据, 如果没有给出日期, 则显示当前日期.

options: 操作指令, 如果没有任何指令, 默认为今天日期, 输出格式为空格间隔的日历数据.
  -d[date string],
 --date[date string]        输入日期.
  -j, --json                以JSON格式输出日历数据.
  -s, --string              输出日历字符串.
  -v, --version             输出版本信息并退出.
  -h, --help, --help-ch     显示帮助信息并退出.

date string: 输入的日期, 如果不输入则为当前日期.
  格式: YYYYMMDD
  范围:
       YYYY: [1600, 6399]
         MM: [1, 12]
         DD: [1, 本月最大天数]

```

## 例如:

```bash
./calendar.exe
2024 1 6 6 31 366 5 1 2023 11 25 10 4 4 0 0 23 24 14 1

./calendar.exe -j
{"result":"success","data":{"solarInfo":{"year":2024,"month":1,"day":6,"week":6,"daysOfMonth":31,"daysOfYear":366,"dayOfYear":5,"weekOfYear":1},"lunarInfo":{"lunarYear":2023,"lunarMonth":11,"lunarDay":25,"tiangan":10,"dizhi":4,"shengxiao":4,"isLeapMonth":0,"isDXYue":0},"jieqiInfo":{"jieqi":23,"nextJieqi":24,"nextJieqiRemainDays":14,"isJieqiToday":1}}}

./calendar.exe -s
2024-01-06 星期六 癸卯(兔)年 冬月(小)廿五 小寒* 距离大寒还有14天

./calendar.exe -d20240101 -j
{"result":"success","data":{"solarInfo":{"year":2024,"month":1,"day":1,"week":1,"daysOfMonth":31,"daysOfYear":366,"dayOfYear":0,"weekOfYear":1},"lunarInfo":{"lunarYear":2023,"lunarMonth":11,"lunarDay":20,"tiangan":10,"dizhi":4,"shengxiao":4,"isLeapMonth":0,"isDXYue":0},"jieqiInfo":{"jieqi":22,"nextJieqi":23,"nextJieqiRemainDays":5,"isJieqiToday":0}}}

./calendar.exe -d20240101 -s
2024-01-01 星期一 癸卯(兔)年 冬月(小)二十 冬至 距离小寒还有5天
```

