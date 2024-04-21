# 获取1600-6399年间的公历和农历日期数据

## 使用

使用: calendar [options ...]

  显示给定日期的日历数据, 如果没有给出日期, 则显示当前日期.

options: 操作指令, 如果没有任何指令, 默认为今天日期, 输出格式为空格间隔的日历数据.
  -d[date string],
 --date[date string]        输入日期.
  -t, --today                      日期为今天.
  -j, --json                         以JSON格式输出日历数据.
  -s, --string                     输出日历字符串.
  -v, --version                  输出版本信息并退出.
  -h, --help, --help-ch     显示帮助信息并退出.

date string: 输入的日期, 如果不输入则为当前日期.
  格式: YYYYMMDD
  范围:
         YYYY: [1600, 6399]
         MM: [1, 12]
         DD: [1, 本月最大天数]



Usage: calendar [options ...]

  Show the calendar data of the given date, or the current date if no date is given.
Options: Operation instruction,  if there is no instruction, defaults to the today date,
         and the output format is space-spaced calendar data.
  --date[date string],
   -d[date string]          Input date.
   -t, --today                  Date today.
  --json, -j                      Output calendar data in JSON format.
  --string, -s                  Output calendar string.
  --version, -v               Output version information and exit.
  --help, -h, --help-ch   Display help information and exit.

date string: The date entered or the current date if not entered.
  format: YYYYMMDD
  range:
         YYYY: [1600, 6399]
         MM: [1, 12]
         DD: [1, max days]

## 返回值

### 1、字符串

由公历日期农历、日期以及节气信息组成。例如：

**2024-04-18 星期四 甲辰(龙)年 三月(小)初十 清明 距离谷雨还有1天**

**2024-04-19 星期五 甲辰(龙)年 三月(小)十一 谷雨* 距离立夏还有16天**

### 2、JSON数据

```json
{
    "result": "success",
    "data": {
        "solarInfo": {
            "year": 2024,
            "month": 4,
            "day": 20,
            "week": 6,
            "daysOfMonth": 30,
            "daysOfYear": 366,
            "dayOfYear": 110,
            "weekOfYear": 16
        },
        "lunarInfo": {
            "lunarYear": 2024,
            "lunarMonth": 3,
            "lunarDay": 12,
            "tiangan": 1,
            "dizhi": 5,
            "shengxiao": 5,
            "isLeapMonth": false,
            "isDXYue": false
        },
        "jieqiInfo": {
            "jieqi": 6,
            "nextJieqi": 7,
            "nextJieqiRemainDays": 15,
            "isJieqiToday": false
        }
    }
}
```

### 3、纯数字数据

2024 4 21 0 30 366 111 17 2024 3 13 1 5 5 0 0 6 7 14 0

2024 4 22 1 30 366 112 17 2024 3 14 1 5 5 0 0 6 7 13 0

年  月  日  星期  本月天数  一年有多少天  一年中的第几天  一个月中的第几天  农历年  农历月  农历日  天干  地支  生肖  本月是否是闰月  本月是大月还是小月  当前所处的节气  下个节气  距离下个节气所剩天数  今天是否是一个节气的第一天





























