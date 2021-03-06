
#include <iostream>
#include <string>
#include <stdio.h>
#include <cerrno>
using namespace std;


char* converted(const char* s, const char* from_cp, const char* to_cp)
{
  iconv_t ic = iconv_open(to_cp, from_cp);

  if (ic == (iconv_t)(-1)) {
    fprintf(stderr, "iconv: cannot convert from %s to %s\n", from_cp, to_cp);
    return "";
  }

  char* out_buf = (char*)calloc(strlen(s)+1, 1);
  char* out = out_buf;
  char* in = (char*)malloc(strlen(s)+1);
  strcpy(in, s);

  size_t in_ln = strlen(s);
  size_t out_ln = in_ln;
  size_t k = iconv(ic, &in, &in_ln, &out, &out_ln);
  if(k == (size_t)-1)
    fprintf(stderr, "iconv: %u of %d converted\n", k, strlen(s));

  if(errno != 0)
    fprintf(stderr, "iconv: %s\n", strerror(errno));

  iconv_close(ic);

  return out_buf;
}




char* getErrText(int num){

	string err;
	switch (num){
		case 2:
			err = "Неверный протокол";	 
			 
		case 8:
			err = "Неверная цена(сумма)"; 
			
		case 10:
			err = "Неверное количество"; 
			
		case 15:
			err = "Повторная скидка на операцию невозможна"; 
			
		case 16:
			err = "Скидка/надбавка на предыдущую операцию невозможна"; 
			
		case 18:
			err = "Неверный штрих-код товара"; 
			
		case 19:
			err = "Неверный формат"; 
			
		case 20:
			err = "Неверная длина"; 
			
		case 21:
			err = "ККМ заблокированна в режиме ввода даты"; 
			
		case 22:
			err = "Требуется подтверждение ввода даты"; 
			
		case 24:
			err = "Нет больше данных для передачи ПО ККМ"; 
			
		case 26:
			err = "Отчет с гашением прерван. Вход в режим не возможен."; 
			
		case 102:
			err = "Команда не поддерживается в данном режиме ККМ"; 
			
		case 103:
			err = "Нет бумаги"; 
			
		case 104:
			err = "Нет связи с принтером чеков"; 
			
		case 105:
			err = "Механическая ошибка печатающего устройства"; 
			
		case 106:
			err = "Неверный тип чека"; 
			
		case 107:
			err = "Нет больше строк картинки"; 
			
		case 108:
			err = "Неверный номер регистра"; 
			
		case 109:
			err = "Недопустимое целевое устройство"; 
			
		case 110:
			err = "Нет места в массиве картинок"; 
			
		case 111:
			err = "Неверный номер картинки / картинка отсутствует"; 
			
		case 112:
			err = "Сумма сторно больше, чем было получено данным типом оплаты"; 
			
		case 113:
			err = "Сумма не наличных платежей превышает сумму чека"; 
			
		case 114:
			err = "Сумма платежей меньше суммы чека"; 
			
		case 115:
			err = "Накопление меньше суммы возврата или анулирования"; 
			
		case 117:
			err = "Переполнение суммы платежей"; 
			
		case 122:
			err = "Данная модель ККМ не может выполнить команду"; 
			
		case 123:
			err = "Неверная величина скидки / надбавки"; 
			
		case 124:
			err = "Операция после скидки / надбавки невозможна"; 
			
		case 125:
			err = "Неверная секция"; 
			
		case 126:
			err = "Неверный тип оплаты"; 
			
		case 127:
			err = "Переполнение при умножении"; 
			
		case 128:
			err = "Операция запрещена в таблице настроек"; 
			
		case 129:
			err = "Переполнение итога чека"; 
			
		case 130:
			err = "Открыт чек аннулирования - операция невоможна"; 
			
		case 132:
			err = "Переполнение буфера контрольной ленты"; 
			
		case 134:
			err = "Вносимая клиентом сумма меньше суммы чека"; 
			
		case 135:
			err = "Открыт чек возврата - операция невозможна"; 
			
		case 136:
			err = "Смена превысила 24 часа"; 
			
		case 137:
			err = "Открыт чек продажи - операция не возможна"; 
			
		case 140:
			err = "Неверный пароль"; 
			
		case 141:
			err = "Буфер контрольной ленты не переполнен"; 
			
		case 142:
			err = "Идет обработка контрольной ленты"; 
			
		case 143:
			err = "Обнуленная касса (повторное гашение невозможно)"; 
			
		case 145:
			err = "Неверный номер таблицы"; 
			
		case 146:
			err = "Неверный номер ряда"; 
			
		case 147:
			err = "Неверный номер поля"; 
			
		case 148:
			err = "Неверная дата"; 
			
		case 149:
			err = "Неверное время"; 
			
		case 	150:
			err = "Сумма чека по секции меньше суммы сторно"; 
			
		case 151:
			err = "Подсчет суммы сдачи невозможен"; 
			
		case 152:
			err = "В ККМ нет денег для выплаты"; 
			
		case 154:
			err = "Чек закрыт - операция невозможна"; 
			
		case 155:
			err = "Чек открыт - операция невозможна"; 
			
		case 156:
			err = "Смена открыта, операция невозможна"; 
			
		case 157:
			err = "ККМ заблокированна, ждет ввода пароля налогового инспектора"; 
			
		case 158:
			err = "Заводской номер уже задан"; 
			
		case 159:
			err = "Количество перерегистраций не может быть более 4"; 
			
		case 160:
			err = "Ошибка Ф.П."; 
			
		case 162:
			err = "Неверная смена"; 
			
		case 163:
			err = "Неверный тип отчета"; 
			
		case 164:
			err = "Недопустимый пароль"; 
			
		case 165:
			err = "Недопустимый заводской номер ККМ"; 
			
		case 166:
			err = "Недопустимый РНМ"; 
			
		case 167:
			err = "Недопустимый ИНН"; 
			
		case 168:
			err = "ККМ не фискализированна"; 
			
		case 169:
			err = "Не задан заводской номер"; 
			
		case 170:
			err = "Нет отчетов"; 
			
		case 171:
			err = "Режим не активизирован"; 
			
		case 172:
			err = "Нет указанного чека в КЛ"; 
			
		case 173:
			err = "Нет больше записей КЛ"; 
			
		case 174:
			err = "Некорректный код или номер кода защиты ККМ"; 
			
		case 176:
			err = "Требуется выполнение общего гашения"; 
			
		case 177:
			err = "Команда не разрешена введенными кодами защиты ККМ"; 
			
		case 178:
			err = "Невозможна отмена скидки/надбавки"; 
			
		case 179:
			err = "Невозможно закрыть чек данным типом оплаты (в чеке присутствуют операции без контроля наличных)"; 
			
		case 180:
			err = "Неверный номер маршрута"; 
			
		case 181:
			err = "Неверный номер начальной зоны"; 
			
		case 182:
			err = "Неверный номер конечной зоны"; 
			
		case 183:
			err = "Неверный тип тарифа"; 
			
		case 184:
			err = "Неверный тариф"; 
			
		case 186:
			err = "Ошибка обмена с фискальным модулем"; 
			
		case 200:
			err = "Нет устройства, обрабатывающего данную команду"; 
			
		case 201:
			err = "Нет связи с внешним устройством"; 
			
		case 202:
			err = "Ошибочное состояние ТРК"; 
			
		case 203:
			err = "Больше одной регистрации в чеке"; 
			
		case 204:
			err = "Ошибочный номер ТРК"; 
			
		case 205:
			err = "Неверный делитель"; 
			
		case 206:
			err = "Недопустимое целевое устройство"; 
			
		case 207:
			err = "В ККМ произведено 20 активизаций"; 
			
		case 208:
			err = "Активизация данной ЭКЛЗ в составе данной ККМ невозможна"; 
			
		case 209:
			err = "Перегрев головки принтера"; 
			
		case 210:
			err = "Ошибка обмена с ЭКЛЗ на уровне интерфейса I2C"; 
			
		case 211:
			err = "Ошибка формата передачи ЭКЛЗ"; 
			
		case 212:
			err = "Неверное состояние ЭКЛЗ"; 
			
		case 213:
			err = "Неисправимая ошибка ЭКЛЗ"; 
			
		case 214:
			err = "Авария крипто-процессора ЭКЛЗ"; 
			
		case 215:
			err = "Исчерпан временной ресурс ЭКЛЗ"; 
			
		case 216:
			err = "ЭКЛЗ переполнена"; 
			
		case 217:
			err = "В ЭКЛЗ переданы неверная дата или время"; 
			
		case 218:
			err = "В ЭКЛЗ нет запрошенных данных"; 
			
		case 219:
			err = "Переполнение ЭКЛЗ (итог чека)"; 
			
		case 220:
			err = "Буфер переполнен "; 
			
		case 221:
			err = "Невозможно напечатать вторую фискальную копию"; 
			
		case 226:
			err = "Текущая дата меньше даты последней записи в ФП"; 
			
		case 227:
			err = "Область сменных итогов ФП переполнена"; 
			
		case 228:
			err = "Смена уже открыта "; 
			
		case 229:
			err = "Смена не открыта"; 
			
		case 230:
			err = "Номер первой смены больше номера последней смены"; 
			
		case 231:
			err = "Дата первой смены больше даты последней смены"; 
			
		case 232:
			err = "Нет данных в ФП"; 
			
		case 233:
			err = "В заданном диапазоне есть поврежденная запись"; 
			
		case 234:
			err = "Повреждена последняя запись сменных итогов"; 
			
		case 236:
			err = "Отсутствует память регистров"; 
			
		case 237:
			err = "Переполнение денежного регистра при добавлении"; 
			
		case 238:
			err = "Вычитаемая сумма больше содержимого денежного регистра"; 
			
		case 239:
			err = "Нет записи активизации"; 
			
		case 240:
			err = "Область активизации переполнена"; 
			
		case 241:
			err = "Нет активизации с запрашиваемым номером"; 
			
		case 251:
			err = "Некорректные параметры в команде"; 
			
		case 253:
			err = "Некорректный параметр при данных настройках"; 
			
		case 254:
			err = "Некорректные параметры в команде для данной реализации ФР"; 
			
		case 255:
			err = "Ошибка в ПЗУ"; 
			
		case 256:
			err = "Внутренняя ошибка ПО ФР"; 
			
		case 257:
			err = "Переполнение накопления по надбавкам в смене"; 
			
		case 260:
			err = "Переполнение накопления по секциям в смене"; 
			
		case 261:
			err = "Переполнение накопления по скидкам в смене"; 
			
		case 262:
			err = "Переполнение диапазона скидок"; 
			
		case 263:
			err = "Переполнение диапазона оплаты наличными"; 
			
		case 264:
			err = "Переполнение диапазона оплаты типом 2"; 
			
		case 265:
			err = "Переполнение диапазона оплаты типом 3"; 
			
		case 266:
			err = "Переполнение диапазона оплаты типом 4"; 
			
		case 267:
			err = "Не хватает наличности в кассе"; 
			
		case 268:
			err = "Переполнение накопления по налогам в смене"; 
			
		case 269:
			err = "Переполнение итога чека"; 
			
		case 271:
			err = "Переполнение накопления по обороту налогов в смене"; 
			
		case 272:
			err = "Вносимая безналичной оплатой сумма больше суммы чека"; 
			
		case 273:
			err = "Идет печать предыдущей команды"; 
			
		case 275:
			err = "Нет документа для повтора"; 
			
		case 276:
			err = "ЭКЛЗ: количество закрытых смен не совпадает с ФП"; 
			
		case 277:
			err = "Ожидание команды продолжения печати"; 
			
		case 278:
			err = "Документ открыт другим оператором"; 
			
		case 280:
			err = "Переполнение диапазона надбавок"; 
			
		case 281:
			err = "Понижено напряжение 24В"; 
			
		case 282:
			err = "Таблица не определена"; 
			
		case 283:
			err = "Некорректная операция"; 
			
		case 284:
			err = "Отрицательный итог чека"; 
			
		case 285:
			err = "Переполнение при умножении"; 
			
		case 286:
			err = "Переполнение диапазона цены"; 
			
		case 287:
			err = "Переполнение диапазона количества"; 
			
		case 288:
			err = "Переполнение диапазона отдела"; 
			
		case 289:
			err = "ФП отсутствует"; 
			
		case 290:
			err = "Не хватает денег в секции"; 
			
		case 291:
			err = "Переполнение денег в секции"; 
			
		case 292:
			err = "Ошибка связи с ФП"; 
			
		case 293:
			err = "Не хватает денег по обороту налогов"; 
			
		case 294:
			err = "Переполнение денег по обороту налогов"; 
			
		case 295:
			err = "Ошибка питания в момент ответа по IC"; 
			
		case 296:
			err = "Не хватает денег по налогу"; 
			
		case 297:
			err = "Переполнение денег по налогу"; 
			
		case 298:
			err = "Переполнение по выплате в смене"; 
			
		case 299:
			err = "Переполнение ФП"; 
			
		case 300:
			err = "Ошибка отрезчика"; 
			
		case 301:
			err = "Команда не поддерживается в данном подрежиме"; 
			
		case 302:
			err = "Ошибка ОЗУ"; 
			
		case 303:
			err = "Ошибка питания"; 
			
		case 304:
			err = "Ошибка принтера: нет импульсов от тахогенератора"; 
			
		case 305:
			err = "Ошибка принтера: нет сигнала с датчиков"; 
			
		case 306:
			err = "Замена ПО"; 
			
		case 307:
			err = "Замена ФП"; 
			
		case 308:
			err = "Поле не редактируется"; 
			
		case 309:
			err = "Ошибка оборудования"; 
			
		case 310:
			err = "Не совпадает дата"; 
			
		case 311:
			err = "Неверный формат даты"; 
			
		case 312:
			err = "Неверное значение в поле длины"; 
			
		case 313:
			err = "Переполнение диапазона итога чека"; 
			
		case 314:
			err = "Ошибка связи с ФП"; 
			
		case 315:
			err = "Ошибка связи с ФП"; 
			
		case 316:
			err = "Ошибка связи с ФП"; 
			
		case 317:
			err = "Ошибка связи с ФП"; 
			
		case 318:
			err = "Переполнение наличности"; 
			
		case 319:
			err = "Переполнение по продажам в смене"; 
			
		case 320:
			err = "Переполнение по покупкам в смене"; 
			
		case 321:
			err = "Переполнение по возвратам продаж в смене"; 
			
		case 322:
			err = "Переполнение по возвратам покупок в смене"; 
			
		case 323:
			err = "Переполнение по внесению в смене"; 
			
		case 324:
			err = "Переполнение по надбавкам в чеке"; 
			
		case 325:
			err = "Переполнение по скидкам в чеке"; 
			
		case 326:
			err = "Отрицательный итог надбавки в чеке"; 
			
		case 327:
			err = "Отрицательный итог скидки в чеке"; 
			
		case 328:
			err = "Нулевой итог чека"; 
			
		case 329:
			err = "Поле превышает размер, установленный в настройках"; 
			
		case 330:
			err = "Выход за границу поля печати при данных настройках шрифта"; 
			
		case 331:
			err = "Наложение полей"; 
			
		case 332:
			err = "Восстановление ОЗУ прошло успешно"; 
			
		case 334:
			err = "Ошибка связи с ЭКЛЗ"; 
			
		case 335:
			err = "ЭКЛЗ отсутствует"; 
			
		case 336:
			err = "ЭКЛЗ: некорректный формат или параметр команды"; 
			
		case 337:
			err = "Некорректное состояние ЭКЛЗ"; 
			
		case 338:
			err = "Авария ЭКЛЗ"; 
			
		case 339:
			err = "Авария КС в составе ЭКЛЗ"; 
			
		case 340:
			err = "Исчерпан временный ресурс ЭКЛЗ"; 
			
		case 342:
			err = "ЭКЛЗ: неверные дата и время"; 
			
		case 344:
			err = "Переполнение ЭКЛЗ(отрицательный итог документа)"; 
			
		case 350:
			err = "ЭКЛЗ: переполнение в параметре количество"; 
			
		case 351:
			err = "ЭКЛЗ: уже активизирована"; 
			
		case 352:
			err = "ЭКЛЗ: суточный отчет с гашением прервать нельзя"; 
			
		case 353:
			err = "Превышение напряжения в блоке питания"; 
			
		case 354:
			err = "Несовпадение итогов чека и ЭКЛЗ"; 
			
		case 355:
			err = "Несовпадение номеров смен"; 
			
		case 356:
			err = "Команда не поддерживается в данном оборудовании"; 
			
		case 357:
			err = "Нет номера ККМ"; 
			
		case 358:
			err = "Ошибка КС ФП"; 
			
		case 359:
			err = "Ошибка записи таймера"; 
			
		case 360:
			err = "Ошибка записи ФП"; 
			
		case 361:
			err = "Ошибка КС таймера"; 
			
		case 362:
			err = "ЭКЛЗ активизированна не в данной ККМ"; 
			
		case 363:
			err = "Занят"; 
			
		case 364:
			err = "Неверный номер команды"; 
			
		case 365:
			err = "Ошибка длины дополнительных данных"; 
			
		case 366:
			err = "Ошибка КС команды"; 
			
		case 367:
			err = "Неверный ID"; 
			
		case 368:
			err = "Неверная КС_ID"; 
			
		case 369:
			err = "Переполнение количества смен"; 
			
		case 370:
			err = "Выкл. питания, документ отменен"; 
			
		case 371:
			err = "Переполнение диапазона товарных групп"; 
			
		case 372:
			err = "Переполнение подитога"; 
			
		case 373:
			err = "Переполнение диапазона покупок в чеке"; 
			
		case 374:
			err = "Переполнение количества документов"; 
			
		case 375:
			err = "Нет ни одной покупки"; 
			
		case 376:
			err = "Переполнение диапазона вносимых денег"; 
			
		case 377:
			err = "Переполнение накоплений по снятиям"; 
			
		case 378:
			err = "Переполнение количества внесений"; 
			
		case 379:
			err = "Переполнение количества снятий"; 
			
		case 380:
			err = "Сумма сторно не равна сумме покупке"; 
			
		case 381:
			err = "Скидка/наценка сторно не равна скидке/наценке покупки"; 
			
		case 382:
			err = "Скидка/наценка сторно больше скидки/наценки покупки"; 
			
		case 383:
			err = "Налоговая ставка в сторно не применялась в покупках"; 
			
		case 384:
			err = "Налог сторно больше налога покупки"; 
			
		case 385:
			err = "Переполнение количества отчетов по кассирам"; 
			
		case 386:
			err = "Переполнение количества отчетов по отделам"; 
			
		case 387:
			err = "Переполнение количества отчетов по группам товаров"; 
			
		case 388:
			err = "Переполнение количества отчетов без гашения"; 
			
		case 389:
			err = "Переполнение количества отчетов с гашением"; 
			
		case 390:
			err = "Переполнение количества перерегистраций"; 
			
		case 391:
			err = "Стартовая дата больше даты последней закрытой смены"; 
			
		case 392:
			err = "Завершающая дата меньше даты первой фискализации"; 
			
		case 393:
			err = "Стартовый номер больше завершающего"; 
			
		case 394:
			err = "Переполнение количества фискальных отчетов"; 
			
		case 395:
			err = "Прерван полный фискальный отчет"; 
			
		case 396:
			err = "Нет закрытых смен"; 
			
		case 397:
			err = "Не выбран индикатор"; 
			
		case 398:
			err = "ЭКЛЗ не активизирована или архив закрыт"; 
			
		case 399:
			err = "Переполнение количества активизаций"; 
			
		case 400:
			err = "Переполнение количества закрытых архивов"; 
			
		case 401:
			err = "Несовпадение сумм продаж с данными ЭКЛЗ, данные восстановлены"; 
			
		case 402:
			err = "Несовпадение сумм покупок с данными ЭКЛЗ, данные восстановлены"; 
			
		case 403:
			err = "Несовпадение сумм возвратов продаж с данными ЭКЛЗ, данные восстановлены"; 
			
		case 404:
			err = "Несовпадение сумм возвратов покупок с данными ЭКЛЗ, данные восстановлены"; 
			
		case 405:
			err = "Стартовый номер смены меньше номера первой закрытой смены ЭКЛЗ"; 
			
		case 406:
			err = "Стартовый номер смены больше текущего номера смены"; 
			
		case 407:
			err = "Стартовая дата меньше даты последней активизации"; 
			
		case 408:
			err = "Текущая дата меньше стартовой"; 
			
		case 409:
			err = "Прерван отчет из ЭКЛЗ"; 
			
		case 410:
			err = "Нет ни одной активизации"; 
			
		case 411:
			err = "Стартовый номер смены больше номера последней закрытой смены ЭКЛЗ"; 
			
		case 412:
			err = "Завершающий номер смены меньше номера первой закрытой смены ЭКЛЗ"; 
			
		case 413:
			err = "Завершающая дата меньше даты активизации ЭКЛЗ"; 
			
		case 414:
			err = "Стартовая дата больше даты последней закрытой смены ЭКЛЗ"; 
			
		case 415:
			err = "Переполнение диапазона скидок/наценок"; 
			
		case 416:
			err = "Скидка больше подитога"; 
			
		case 417:
			err = "Несовпадение сумм, необходимо закрыть смену"; 
			
		case 418:
			err = "Аппаратная ошибка! ФР вернул некорректное значение параметра!"; 
			
		case 419:
			err = "Протокол не поддерживается!"; 
			
		case 420:
			err = "Недопустимое целевое устройство"; 
			
		case 421:
			err = "Недопустимый шрифт"; 
			
		case 422:
			err = "Недопустимый множитель"; 
			
		case 423:
			err = "Недопустимое межстрочие"; 
			
		case 424:
			err = "Недопустиая яркость"; 
			
		case 425:
			err = "Недопустимый атрибут"; 
			
		case 426:
			err = "Переполнение итоговой строки"; 
			
		case 427:
			err = "Сторнируемая сумма больше чем было полученно данным типом оплаты"; 
			
		case 428:
			err = "Неисправен накопитель ФП1, ФП2 или часы"; 
			
		case 429:
			err = "Отсутствует ФП1"; 
			
		case 430:
			err = "Отсутствует ФП2"; 
			
		case 431:
			err = "Нет запрошенных данных"; 
			
		case 432:
			err = "ФП в режиме вывода данных"; 
			
		case 433:
			err = "Некорректная длина команды"; 
			
		case 434:
			err = "Неисправна ячейка памяти ФП при записи итога"; 
			
		case 435:
			err = "Неверный формат поля"; 
			
		case 436:
			err = "Неверная контрольная сумма"; 
			
		case 437:
			err = "Неверный пароль передачи данных. Пароль по умолчанию \"AERF\""; 
			
		case 438:
			err = "Необходима команда \"Начало сеанса\""; 
			
		case 439:
			err = "Превышена максимальная длина строкового поля"; 
			
		case 440:
			err = "Превышена максимальная длина сообщения"; 
			
		case 441:
			err = "Значение поля вне диапазона"; 
			
		case 442:
			err = "При данном состоянии докумена эта команда недопустима"; 
			
		case 443:
			err = "Обязательное строковое поле имеет нулевую длину"; 
			
		case 444:
			err = "Слишком большой результат"; 
			
		case 445:
			err = "Обратная операция невозможна из-за отсутствия прямой"; 
			
		case 446:
			err = "Необходимо выполнить Z отчет (закрытие смены)"; 
			
		case 447:
			err = "Таймаут при печати"; 
			
		case 448:
			err = "Не исправимая ошибка принтера"; 
			
		case 449:
			err = "Принтер не готов к печати"; 
			
		case 450:
			err = "Бумага близка к концу"; 
			
		case 451:
			err = "Неверный пароль доступа к ФП. Необходимо выполнить команду, например, \"Фискальный отчет\", введя правильный пароль"; 
			
		case 452:
			err = "ККМ уже сертифицированна"; 
			
		case 453:
			err = "Исчерпано число фискализаций"; 
			
		case 454:
			err = "Неверный буфер печати (для команды 70)"; 
			
		case 455:
			err = "Неверное G-поле(для команды 73)"; 
			
		case 456:
			err = "Неверный номер типа оплаты"; 
			
		case 457:
			err = "Таймаут приема"; 
			
		case 458:
			err = "Ошибка приема"; 
			
		case 459:
			err = "Неверное состояние ККМ"; 
			
		case 460:
			err = "Слишком много операций в документе. Необходима команда \"Аннулировать\""; 
			
		case 461:
			err = "Необходима печать буфера контрольной ленты"; 
			
		case 462:
			err = "Неверный номер вида платежа"; 
			
		case 463:
			err = "Неверное состояние принтера"; 
			
		case 464:
			err = "Неверное дата/время. Невозможно установить переданные дату/время"; 
			
		case 465:
			err = "Нет места для добавления отдела/составляющей (суммарное их число > 400)"; 
			
		case 466:
			err = "Индекс отдела/составляющей уже существует"; 
			
		case 467:
			err = "Невозможно удалить отдел - есть составляющие"; 
			
		case 468:
			err = "Индекс отдела/составляющей не обнаружен"; 
			
		case 469:
			err = "Фискальная память неисправна"; 
			
		case 470:
			err = "Необходима инициализация фискальной памяти"; 
			
		case 471:
			err = "Некорректный стартовый символ на приеме"; 
			
		case 472:
			err = "Неопознанный ответ от ЭКЛЗ"; 
			
		case 473:
			err = "Неизвестная команда ЭКЛЗ(01 из ЭКЛЗ)"; 
			
		case 474:
			err = "Таймаут приема от ЭКЛЗ"; 
			
		case 475:
			err = "Таймаут передачи в ЭКЛЗ"; 
			
		case 476:
			err = "Неверная контрольная сумма ответа ЭКЛЗ"; 
			
		case 477:
			err = "Неверная контрольная сумма в команде ЭКЛЗ"; 
			
		case 478:
			err = "Контроллер ЭКЛЗ не обнаружен"; 
			
		case 479:
			err = "Данные в ЭКЛЗ не синхронизированы"; 
			
		case 480:
			err = "Аварийное состояние РИК (04 из ЭКЛЗ)"; 
			
		case 481:
			err = "Число активизаций исчерпано"; 
			
		case 482:
			err = "Требуется распечатка СКЛ"; 
			
		case 483:
			err = "Аварийное состояние СКЛ"; 
			
		case 484:
			err = "Ошибка при формировании строки для печати"; 
			
		case 485:
			err = "Ошибка в фискальных данных, аппарат блокирован"; 
			
		case 486:
			err = "Превышена длина поля команды"; 
			
		case 487:
			err = "Ошибка чтения таймера"; 
			
		case 489:
			err = "Операция прервана пользователем"; 
			
		case 490:
			err = "Запрещенная команда ПУ"; 
			
		case 491:
			err = "Ошибка установки таймера"; 
			
		case 492:
			err = "Неверный пароль налогового инспектора"; 
			
		case 493:
			err = "Неверный пароль на связь"; 
			
		case 494:
			err = "Ошибка чтения фискальной памяти"; 
			
		case 495:
			err = "Переполнеие или отрицательный результат счетчика"; 
			
		case 496:
			err = "Не используется"; 
			
		case 497:
			err = "Оформление документа прервано по окончанию времени ожидания готовности принтера"; 
			
		case 498:
			err = "Буфер ответа пуст"; 
			
		case 499:
			err = "Услуга не введена"; 
			
		case 500:
			err = "Дублирование обязательных реквизитов документа"; 
			
		case 501:
			err = "Ошибка в данных энергозависимой памяти. Аппарат блокирован"; 
			
		case 502:
			err = "Невозможно выполнить инициализацию ФП. ФП уже инициализирована"; 
			
		case 503:
			err = "Вывод прерван по окончании времени ожидания готовности дисплея"; 
			
		case 504:
			err = "Ошибка записи FLASH памяти"; 
			
		case 505:
			err = "Переполнение счетчиков ЭКЛЗ"; 
			
		case 506:
			err = "Авария криптографического процессора в ЭКЛЗ"; 
			
		case 507:
			err = "Сбой криптопроцессора ЭКЛЗ"; 
			
		case 508:
			err = "Ошибка протокола обмена ЭКЛЗ"; 
			
		case 509:
			err = "Переполнение приемного буфера ЭКЛЗ"; 
			
		case 510:
			err = "Неверная контрольная сумма ЭКЛЗ"; 
			
		case 511:
			err = "Превышено количество секций в документе(16 секций - ограничение ЭКЛЗ)"; 
			
		case 512:
			err = "Архив ЭКЛЗ закрыт или переполнение архива"; 
			
		case 513:
			err = "Ошибка. Данные ФП и ЭКЛЗ различаются"; 
			
		case 514:
			err = "Переполнение счетчика количества в чеке, при сложении"; 
			
		case 515:
			err = "Переполнение счетчика количества в чеке, при вычитании"; 
			
		case 516:
			err = "Переполнение счетчика суммы аннулирований в чеке"; 
			
		case 517:
			err = "Переполнение сменного счетчика суммы аннулирований"; 
			
		case 518:
			err = "Переполнение сменного счетчика суммы продаж"; 
			
		case 519:
			err = "Переполнение сменного счетчика суммы наличных"; 
			
		case 520:
			err = "Переполнение сменного счетчика суммы оплаты в кредит"; 
			
		case 521:
			err = "Переполнение сменного счетчика суммы оплаты картой"; 
			
		case 522:
			err = "Переполнение сменного счетчика суммы наличных при вычитании"; 
			
		case 523:
			err = "Переполнение сменного счетчика суммы возвратов при оплате в кредит"; 
			
		case 524:
			err = "Переполнение счетчика итоговой суммы в чеке при добавлении"; 
			
		case 525:
			err = "Переполнение счетчика итоговой суммы в чеке при вычитании"; 
			
		case 526:
			err = "Переполнение счетчика стоимости в чеке, при умножении количества на стоимость"; 
			
		case 527:
			err = "Переполнение счетчика итоговой суммы в чеке при вычислении скидки"; 
			
		case 528:
			err = "Переполнение счетчика итоговой суммы по секции в чеке при вычислении скидки"; 
			
		case 529:
			err = "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении скидки"; 
			
		case 530:
			err = "Переполнение счетчика скидок в чеке"; 
			
		case 531:
			err = "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении скидки"; 
			
		case 532:
			err = "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении скидки"; 
			
		case 533:
			err = "Переполнение счетчика итоговой суммы в чеке при вычислении надбавки"; 
			
		case 534:
			err = "Переполнение счетчика итоговой суммы по секции в чеке при вычислении надбавки"; 
			
		case 535:
			err = "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении надбавки"; 
			
		case 536:
			err = "Переполнение счетчика надбавок в чеке"; 
			
		case 537:
			err = "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении надбавки"; 
			
		case 538:
			err = "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении надбавки"; 
			
		case 539:
			err = "Переполнение счетчика итоговой суммы по секции в чеке"; 
			
		case 540:
			err = "Переполнение счетчика итоговой суммы учета тары в чеке"; 
			
		case 541:
			err = "Переполнение счетчика итоговой суммы налоговой группы в чеке"; 
			
		case 542:
			err = "Переполнение счетчика итоговой суммы безналоговой группы в чеке"; 
			
		case 543:
			err = "Переполнение счетчика итоговой суммы в чеке при вычислении аннулирования скидки"; 
			
		case 544:
			err = "Переполнение счетчика итоговой суммы по секции в чеке при вычислении аннулирования скидки"; 
			
		case 545:
			err = "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении аннулирования скидки"; 
			
		case 546:
			err = "Переполнение счетчика скидок в чеке при вычислении аннулирования скидки"; 
			
		case 547:
			err = "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении аннулирования скидки"; 
			
		case 548:
			err = "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении аннулирования скидки"; 
			
		case 549:
			err = "Переполнение счетчика итоговой суммы в чеке при вычислении аннулирования надбавки"; 
			
		case 550:
			err = "Переполнение счетчика итоговой суммы по секции в чеке при вычислении аннулирования надбавки"; 
			
		case 551:
			err = "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении аннулирования надбавки"; 
			
		case 552:
			err = "Переполнение счетчика надбавок в чеке при вычислении аннулирования надбавки"; 
			
		case 553:
			err = "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении аннулирования надбавки"; 
			
		case 554:
			err = "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении аннулирования надбавки"; 
			
		case 555:
			err = "Переполнение счетчика итоговой суммы оплаты при комбинированной оплате"; 
			
		case 556:
			err = "Блокировка выполнения команды. Расхождение текущей даты и даты последней записи в ФП больше запрограммированного значения. Для снятия блокировки  необходимо выполнить команду программирования даты"; 
			
		case 557:
			err = "Блокировка выполнения команды. Последний документ не напечатан. После восстановления работоспособности принтера (зарядить бумагу, опустить печатающую головку, закрыть крышку) принтер автоматически распечатывает документ и снимает блокировку"; 
			
		case 558:
			err = "Блокировка выполнения команды. Выполняется тестирование оборудования ККМ"; 
			
		case 559:
			err = "Итоговая сумма чека возврата не равна итоговой возвращаемой сумме при комбинированном возврате"; 			
	}		

	if (num ==-10){
		err = "Неизвестная ошибка";}
	if (num ==-1){
	err = "ФР е отвечает";}
	if (num ==-2){
	err = "Неврный протокол";}
	if (num ==-3){
	err = "Приработе без ФР/ в обучающем режиме не смогли считать/записать значение регистра";}
	if (num ==-4){
	err = "Невзможно дописать в файл значение недостающего регистра";}
	if (num ==-5){
	err = "Истекло время получения ответа от ФР!";}
	if (num ==0){
	err = "Нет ошибок";}

	char *cstr = new char[err.length() + 1];
	strcpy(cstr, err.c_str());

	return cstr;
}

