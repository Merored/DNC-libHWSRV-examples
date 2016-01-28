
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

string getErrText(int num){
switch (num){
	case '2':
		return "Неверный протокол";	 
		break; 
	case '8':
		return "Неверная цена(сумма)"; 
		break;
	case '10':
		return "Неверное количество"; 
		break;
	case '15':
		return "Повторная скидка на операцию невозможна"; 
		break;
	case '16':
		return "Скидка/надбавка на предыдущую операцию невозможна"; 
		break;
	case '18':
		return "Неверный штрих-код товара"; 
		break;
	case '19':
		return "Неверный формат"; 
		break;
	case '20':
		return "Неверная длина"; 
		break;
	case '21':
		return "ККМ заблокированна в режиме ввода даты"; 
		break;
	case '22':
		return "Требуется подтверждение ввода даты"; 
		break;
	case '24':
		return "Нет больше данных для передачи ПО ККМ"; 
		break;
	case '26':
		return "Отчет с гашением прерван. Вход в режим не возможен."; 
		break;
	case '102':
		return "Команда не поддерживается в данном режиме ККМ"; 
		break;
	case '103':
		return "Нет бумаги"; 
		break;
	case '104':
		return "Нет связи с принтером чеков"; 
		break;
	case '105':
		return "Механическая ошибка печатающего устройства"; 
		break;
	case '106':
		return "Неверный тип чека"; 
		break;
	case '107':
		return "Нет больше строк картинки"; 
		break;
	case '108':
		return "Неверный номер регистра"; 
		break;
	case '109':
		return "Недопустимое целевое устройство"; 
		break;
	case '110':
		return "Нет места в массиве картинок"; 
		break;
	case '111':
		return "Неверный номер картинки / картинка отсутствует"; 
		break;
	case '112':
		return "Сумма сторно больше, чем было получено данным типом оплаты"; 
		break;
	case '113':
		return "Сумма не наличных платежей превышает сумму чека"; 
		break;
	case '114':
		return "Сумма платежей меньше суммы чека"; 
		break;
	case '115':
		return "Накопление меньше суммы возврата или анулирования"; 
		break;
	case '117':
		return "Переполнение суммы платежей"; 
		break;
	case '122':
		return "Данная модель ККМ не может выполнить команду"; 
		break;
	case '123':
		return "Неверная величина скидки / надбавки"; 
		break;
	case '124':
		return "Операция после скидки / надбавки невозможна"; 
		break;
	case '125':
		return "Неверная секция"; 
		break;
	case '126':
		return "Неверный тип оплаты"; 
		break;
	case '127':
		return "Переполнение при умножении"; 
		break;
	case '128':
		return "Операция запрещена в таблице настроек"; 
		break;
	case '129':
		return "Переполнение итога чека"; 
		break;
	case '130':
		return "Открыт чек аннулирования - операция невоможна"; 
		break;
	case '132':
		return "Переполнение буфера контрольной ленты"; 
		break;
	case '134':
		return "Вносимая клиентом сумма меньше суммы чека"; 
		break;
	case '135':
		return "Открыт чек возврата - операция невозможна"; 
		break;
	case '136':
		return "Смена превысила 24 часа"; 
		break;
	case '137':
		return "Открыт чек продажи - операция не возможна"; 
		break;
	case '140':
		return "Неверный пароль"; 
		break;
	case '141':
		return "Буфер контрольной ленты не переполнен"; 
		break;
	case '142':
		return "Идет обработка контрольной ленты"; 
		break;
	case '143':
		return "Обнуленная касса (повторное гашение невозможно)"; 
		break;
	case '145':
		return "Неверный номер таблицы"; 
		break;
	case '146':
		return "Неверный номер ряда"; 
		break;
	case '147':
		return "Неверный номер поля"; 
		break;
	case '148':
		return "Неверная дата"; 
		break;
	case '149':
		return "Неверное время"; 
		break;
	case '	150':
		return "Сумма чека по секции меньше суммы сторно"; 
		break;
	case '151':
		return "Подсчет суммы сдачи невозможен"; 
		break;
	case '152':
		return "В ККМ нет денег для выплаты"; 
		break;
	case '154':
		return "Чек закрыт - операция невозможна"; 
		break;
	case '155':
		return "Чек открыт - операция невозможна"; 
		break;
	case '156':
		return "Смена открыта, операция невозможна"; 
		break;
	case '157':
		return "ККМ заблокированна, ждет ввода пароля налогового инспектора"; 
		break;
	case '158':
		return "Заводской номер уже задан"; 
		break;
	case '159':
		return "Количество перерегистраций не может быть более 4"; 
		break;
	case '160':
		return "Ошибка Ф.П."; 
		break;
	case '162':
		return "Неверная смена"; 
		break;
	case '163':
		return "Неверный тип отчета"; 
		break;
	case '164':
		return "Недопустимый пароль"; 
		break;
	case '165':
		return "Недопустимый заводской номер ККМ"; 
		break;
	case '166':
		return "Недопустимый РНМ"; 
		break;
	case '167':
		return "Недопустимый ИНН"; 
		break;
	case '168':
		return "ККМ не фискализированна"; 
		break;
	case '169':
		return "Не задан заводской номер"; 
		break;
	case '170':
		return "Нет отчетов"; 
		break;
	case '171':
		return "Режим не активизирован"; 
		break;
	case '172':
		return "Нет указанного чека в КЛ"; 
		break;
	case '173':
		return "Нет больше записей КЛ"; 
		break;
	case '174':
		return "Некорректный код или номер кода защиты ККМ"; 
		break;
	case '176':
		return "Требуется выполнение общего гашения"; 
		break;
	case '177':
		return "Команда не разрешена введенными кодами защиты ККМ"; 
		break;
	case '178':
		return "Невозможна отмена скидки/надбавки"; 
		break;
	case '179':
		return "Невозможно закрыть чек данным типом оплаты (в чеке присутствуют операции без контроля наличных)"; 
		break;
	case '180':
		return "Неверный номер маршрута"; 
		break;
	case '181':
		return "Неверный номер начальной зоны"; 
		break;
	case '182':
		return "Неверный номер конечной зоны"; 
		break;
	case '183':
		return "Неверный тип тарифа"; 
		break;
	case '184':
		return "Неверный тариф"; 
		break;
	case '186':
		return "Ошибка обмена с фискальным модулем"; 
		break;
	case '200':
		return "Нет устройства, обрабатывающего данную команду"; 
		break;
	case '201':
		return "Нет связи с внешним устройством"; 
		break;
	case '202':
		return "Ошибочное состояние ТРК"; 
		break;
	case '203':
		return "Больше одной регистрации в чеке"; 
		break;
	case '204':
		return "Ошибочный номер ТРК"; 
		break;
	case '205':
		return "Неверный делитель"; 
		break;
	case '206':
		return "Недопустимое целевое устройство"; 
		break;
	case '207':
		return "В ККМ произведено 20 активизаций"; 
		break;
	case '208':
		return "Активизация данной ЭКЛЗ в составе данной ККМ невозможна"; 
		break;
	case '209':
		return "Перегрев головки принтера"; 
		break;
	case '210':
		return "Ошибка обмена с ЭКЛЗ на уровне интерфейса I2C"; 
		break;
	case '211':
		return "Ошибка формата передачи ЭКЛЗ"; 
		break;
	case '212':
		return "Неверное состояние ЭКЛЗ"; 
		break;
	case '213':
		return "Неисправимая ошибка ЭКЛЗ"; 
		break;
	case '214':
		return "Авария крипто-процессора ЭКЛЗ"; 
		break;
	case '215':
		return "Исчерпан временной ресурс ЭКЛЗ"; 
		break;
	case '216':
		return "ЭКЛЗ переполнена"; 
		break;
	case '217':
		return "В ЭКЛЗ переданы неверная дата или время"; 
		break;
	case '218':
		return "В ЭКЛЗ нет запрошенных данных"; 
		break;
	case '219':
		return "Переполнение ЭКЛЗ (итог чека)"; 
		break;
	case '220':
		return "Буфер переполнен "; 
		break;
	case '221':
		return "Невозможно напечатать вторую фискальную копию"; 
		break;
	case '226':
		return "Текущая дата меньше даты последней записи в ФП"; 
		break;
	case '227':
		return "Область сменных итогов ФП переполнена"; 
		break;
	case '228':
		return "Смена уже открыта "; 
		break;
	case '229':
		return "Смена не открыта"; 
		break;
	case '230':
		return "Номер первой смены больше номера последней смены"; 
		break;
	case '231':
		return "Дата первой смены больше даты последней смены"; 
		break;
	case '232':
		return "Нет данных в ФП"; 
		break;
	case '233':
		return "В заданном диапазоне есть поврежденная запись"; 
		break;
	case '234':
		return "Повреждена последняя запись сменных итогов"; 
		break;
	case '236':
		return "Отсутствует память регистров"; 
		break;
	case '237':
		return "Переполнение денежного регистра при добавлении"; 
		break;
	case '238':
		return "Вычитаемая сумма больше содержимого денежного регистра"; 
		break;
	case '239':
		return "Нет записи активизации"; 
		break;
	case '240':
		return "Область активизации переполнена"; 
		break;
	case '241':
		return "Нет активизации с запрашиваемым номером"; 
		break;
	case '251':
		return "Некорректные параметры в команде"; 
		break;
	case '253':
		return "Некорректный параметр при данных настройках"; 
		break;
	case '254':
		return "Некорректные параметры в команде для данной реализации ФР"; 
		break;
	case '255':
		return "Ошибка в ПЗУ"; 
		break;
	case '256':
		return "Внутренняя ошибка ПО ФР"; 
		break;
	case '257':
		return "Переполнение накопления по надбавкам в смене"; 
		break;
	case '260':
		return "Переполнение накопления по секциям в смене"; 
		break;
	case '261':
		return "Переполнение накопления по скидкам в смене"; 
		break;
	case '262':
		return "Переполнение диапазона скидок"; 
		break;
	case '263':
		return "Переполнение диапазона оплаты наличными"; 
		break;
	case '264':
		return "Переполнение диапазона оплаты типом 2"; 
		break;
	case '265':
		return "Переполнение диапазона оплаты типом 3"; 
		break;
	case '266':
		return "Переполнение диапазона оплаты типом 4"; 
		break;
	case '267':
		return "Не хватает наличности в кассе"; 
		break;
	case '268':
		return "Переполнение накопления по налогам в смене"; 
		break;
	case '269':
		return "Переполнение итога чека"; 
		break;
	case '271':
		return "Переполнение накопления по обороту налогов в смене"; 
		break;
	case '272':
		return "Вносимая безналичной оплатой сумма больше суммы чека"; 
		break;
	case '273':
		return "Идет печать предыдущей команды"; 
		break;
	case '275':
		return "Нет документа для повтора"; 
		break;
	case '276':
		return "ЭКЛЗ: количество закрытых смен не совпадает с ФП"; 
		break;
	case '277':
		return "Ожидание команды продолжения печати"; 
		break;
	case '278':
		return "Документ открыт другим оператором"; 
		break;
	case '280':
		return "Переполнение диапазона надбавок"; 
		break;
	case '281':
		return "Понижено напряжение 24В"; 
		break;
	case '282':
		return "Таблица не определена"; 
		break;
	case '283':
		return "Некорректная операция"; 
		break;
	case '284':
		return "Отрицательный итог чека"; 
		break;
	case '285':
		return "Переполнение при умножении"; 
		break;
	case '286':
		return "Переполнение диапазона цены"; 
		break;
	case '287':
		return "Переполнение диапазона количества"; 
		break;
	case '288':
		return "Переполнение диапазона отдела"; 
		break;
	case '289':
		return "ФП отсутствует"; 
		break;
	case '290':
		return "Не хватает денег в секции"; 
		break;
	case '291':
		return "Переполнение денег в секции"; 
		break;
	case '292':
		return "Ошибка связи с ФП"; 
		break;
	case '293':
		return "Не хватает денег по обороту налогов"; 
		break;
	case '294':
		return "Переполнение денег по обороту налогов"; 
		break;
	case '295':
		return "Ошибка питания в момент ответа по IC"; 
		break;
	case '296':
		return "Не хватает денег по налогу"; 
		break;
	case '297':
		return "Переполнение денег по налогу"; 
		break;
	case '298':
		return "Переполнение по выплате в смене"; 
		break;
	case '299':
		return "Переполнение ФП"; 
		break;
	case '300':
		return "Ошибка отрезчика"; 
		break;
	case '301':
		return "Команда не поддерживается в данном подрежиме"; 
		break;
	case '302':
		return "Ошибка ОЗУ"; 
		break;
	case '303':
		return "Ошибка питания"; 
		break;
	case '304':
		return "Ошибка принтера: нет импульсов от тахогенератора"; 
		break;
	case '305':
		return "Ошибка принтера: нет сигнала с датчиков"; 
		break;
	case '306':
		return "Замена ПО"; 
		break;
	case '307':
		return "Замена ФП"; 
		break;
	case '308':
		return "Поле не редактируется"; 
		break;
	case '309':
		return "Ошибка оборудования"; 
		break;
	case '310':
		return "Не совпадает дата"; 
		break;
	case '311':
		return "Неверный формат даты"; 
		break;
	case '312':
		return "Неверное значение в поле длины"; 
		break;
	case '313':
		return "Переполнение диапазона итога чека"; 
		break;
	case '314':
		return "Ошибка связи с ФП"; 
		break;
	case '315':
		return "Ошибка связи с ФП"; 
		break;
	case '316':
		return "Ошибка связи с ФП"; 
		break;
	case '317':
		return "Ошибка связи с ФП"; 
		break;
	case '318':
		return "Переполнение наличности"; 
		break;
	case '319':
		return "Переполнение по продажам в смене"; 
		break;
	case '320':
		return "Переполнение по покупкам в смене"; 
		break;
	case '321':
		return "Переполнение по возвратам продаж в смене"; 
		break;
	case '322':
		return "Переполнение по возвратам покупок в смене"; 
		break;
	case '323':
		return "Переполнение по внесению в смене"; 
		break;
	case '324':
		return "Переполнение по надбавкам в чеке"; 
		break;
	case '325':
		return "Переполнение по скидкам в чеке"; 
		break;
	case '326':
		return "Отрицательный итог надбавки в чеке"; 
		break;
	case '327':
		return "Отрицательный итог скидки в чеке"; 
		break;
	case '328':
		return "Нулевой итог чека"; 
		break;
	case '329':
		return "Поле превышает размер, установленный в настройках"; 
		break;
	case '330':
		return "Выход за границу поля печати при данных настройках шрифта"; 
		break;
	case '331':
		return "Наложение полей"; 
		break;
	case '332':
		return "Восстановление ОЗУ прошло успешно"; 
		break;
	case '334':
		return "Ошибка связи с ЭКЛЗ"; 
		break;
	case '335':
		return "ЭКЛЗ отсутствует"; 
		break;
	case '336':
		return "ЭКЛЗ: некорректный формат или параметр команды"; 
		break;
	case '337':
		return "Некорректное состояние ЭКЛЗ"; 
		break;
	case '338':
		return "Авария ЭКЛЗ"; 
		break;
	case '339':
		return "Авария КС в составе ЭКЛЗ"; 
		break;
	case '340':
		return "Исчерпан временный ресурс ЭКЛЗ"; 
		break;
	case '342':
		return "ЭКЛЗ: неверные дата и время"; 
		break;
	case '344':
		return "Переполнение ЭКЛЗ(отрицательный итог документа)"; 
		break;
	case '350':
		return "ЭКЛЗ: переполнение в параметре количество"; 
		break;
	case '351':
		return "ЭКЛЗ: уже активизирована"; 
		break;
	case '352':
		return "ЭКЛЗ: суточный отчет с гашением прервать нельзя"; 
		break;
	case '353':
		return "Превышение напряжения в блоке питания"; 
		break;
	case '354':
		return "Несовпадение итогов чека и ЭКЛЗ"; 
		break;
	case '355':
		return "Несовпадение номеров смен"; 
		break;
	case '356':
		return "Команда не поддерживается в данном оборудовании"; 
		break;
	case '357':
		return "Нет номера ККМ"; 
		break;
	case '358':
		return "Ошибка КС ФП"; 
		break;
	case '359':
		return "Ошибка записи таймера"; 
		break;
	case '360':
		return "Ошибка записи ФП"; 
		break;
	case '361':
		return "Ошибка КС таймера"; 
		break;
	case '362':
		return "ЭКЛЗ активизированна не в данной ККМ"; 
		break;
	case '363':
		return "Занят"; 
		break;
	case '364':
		return "Неверный номер команды"; 
		break;
	case '365':
		return "Ошибка длины дополнительных данных"; 
		break;
	case '366':
		return "Ошибка КС команды"; 
		break;
	case '367':
		return "Неверный ID"; 
		break;
	case '368':
		return "Неверная КС_ID"; 
		break;
	case '369':
		return "Переполнение количества смен"; 
		break;
	case '370':
		return "Выкл. питания, документ отменен"; 
		break;
	case '371':
		return "Переполнение диапазона товарных групп"; 
		break;
	case '372':
		return "Переполнение подитога"; 
		break;
	case '373':
		return "Переполнение диапазона покупок в чеке"; 
		break;
	case '374':
		return "Переполнение количества документов"; 
		break;
	case '375':
		return "Нет ни одной покупки"; 
		break;
	case '376':
		return "Переполнение диапазона вносимых денег"; 
		break;
	case '377':
		return "Переполнение накоплений по снятиям"; 
		break;
	case '378':
		return "Переполнение количества внесений"; 
		break;
	case '379':
		return "Переполнение количества снятий"; 
		break;
	case '380':
		return "Сумма сторно не равна сумме покупке"; 
		break;
	case '381':
		return "Скидка/наценка сторно не равна скидке/наценке покупки"; 
		break;
	case '382':
		return "Скидка/наценка сторно больше скидки/наценки покупки"; 
		break;
	case '383':
		return "Налоговая ставка в сторно не применялась в покупках"; 
		break;
	case '384':
		return "Налог сторно больше налога покупки"; 
		break;
	case '385':
		return "Переполнение количества отчетов по кассирам"; 
		break;
	case '386':
		return "Переполнение количества отчетов по отделам"; 
		break;
	case '387':
		return "Переполнение количества отчетов по группам товаров"; 
		break;
	case '388':
		return "Переполнение количества отчетов без гашения"; 
		break;
	case '389':
		return "Переполнение количества отчетов с гашением"; 
		break;
	case '390':
		return "Переполнение количества перерегистраций"; 
		break;
	case '391':
		return "Стартовая дата больше даты последней закрытой смены"; 
		break;
	case '392':
		return "Завершающая дата меньше даты первой фискализации"; 
		break;
	case '393':
		return "Стартовый номер больше завершающего"; 
		break;
	case '394':
		return "Переполнение количества фискальных отчетов"; 
		break;
	case '395':
		return "Прерван полный фискальный отчет"; 
		break;
	case '396':
		return "Нет закрытых смен"; 
		break;
	case '397':
		return "Не выбран индикатор"; 
		break;
	case '398':
		return "ЭКЛЗ не активизирована или архив закрыт"; 
		break;
	case '399':
		return "Переполнение количества активизаций"; 
		break;
	case '400':
		return "Переполнение количества закрытых архивов"; 
		break;
	case '401':
		return "Несовпадение сумм продаж с данными ЭКЛЗ, данные восстановлены"; 
		break;
	case '402':
		return "Несовпадение сумм покупок с данными ЭКЛЗ, данные восстановлены"; 
		break;
	case '403':
		return "Несовпадение сумм возвратов продаж с данными ЭКЛЗ, данные восстановлены"; 
		break;
	case '404':
		return "Несовпадение сумм возвратов покупок с данными ЭКЛЗ, данные восстановлены"; 
		break;
	case '405':
		return "Стартовый номер смены меньше номера первой закрытой смены ЭКЛЗ"; 
		break;
	case '406':
		return "Стартовый номер смены больше текущего номера смены"; 
		break;
	case '407':
		return "Стартовая дата меньше даты последней активизации"; 
		break;
	case '408':
		return "Текущая дата меньше стартовой"; 
		break;
	case '409':
		return "Прерван отчет из ЭКЛЗ"; 
		break;
	case '410':
		return "Нет ни одной активизации"; 
		break;
	case '411':
		return "Стартовый номер смены больше номера последней закрытой смены ЭКЛЗ"; 
		break;
	case '412':
		return "Завершающий номер смены меньше номера первой закрытой смены ЭКЛЗ"; 
		break;
	case '413':
		return "Завершающая дата меньше даты активизации ЭКЛЗ"; 
		break;
	case '414':
		return "Стартовая дата больше даты последней закрытой смены ЭКЛЗ"; 
		break;
	case '415':
		return "Переполнение диапазона скидок/наценок"; 
		break;
	case '416':
		return "Скидка больше подитога"; 
		break;
	case '417':
		return "Несовпадение сумм, необходимо закрыть смену"; 
		break;
	case '418':
		return "Аппаратная ошибка! ФР вернул некорректное значение параметра!"; 
		break;
	case '419':
		return "Протокол не поддерживается!"; 
		break;
	case '420':
		return "Недопустимое целевое устройство"; 
		break;
	case '421':
		return "Недопустимый шрифт"; 
		break;
	case '422':
		return "Недопустимый множитель"; 
		break;
	case '423':
		return "Недопустимое межстрочие"; 
		break;
	case '424':
		return "Недопустиая яркость"; 
		break;
	case '425':
		return "Недопустимый атрибут"; 
		break;
	case '426':
		return "Переполнение итоговой строки"; 
		break;
	case '427':
		return "Сторнируемая сумма больше чем было полученно данным типом оплаты"; 
		break;
	case '428':
		return "Неисправен накопитель ФП1, ФП2 или часы"; 
		break;
	case '429':
		return "Отсутствует ФП1"; 
		break;
	case '430':
		return "Отсутствует ФП2"; 
		break;
	case '431':
		return "Нет запрошенных данных"; 
		break;
	case '432':
		return "ФП в режиме вывода данных"; 
		break;
	case '433':
		return "Некорректная длина команды"; 
		break;
	case '434':
		return "Неисправна ячейка памяти ФП при записи итога"; 
		break;
	case '435':
		return "Неверный формат поля"; 
		break;
	case '436':
		return "Неверная контрольная сумма"; 
		break;
	case '437':
		return "Неверный пароль передачи данных. Пароль по умолчанию \"AERF\""; 
		break;
	case '438':
		return "Необходима команда \"Начало сеанса\""; 
		break;
	case '439':
		return "Превышена максимальная длина строкового поля"; 
		break;
	case '440':
		return "Превышена максимальная длина сообщения"; 
		break;
	case '441':
		return "Значение поля вне диапазона"; 
		break;
	case '442':
		return "При данном состоянии докумена эта команда недопустима"; 
		break;
	case '443':
		return "Обязательное строковое поле имеет нулевую длину"; 
		break;
	case '444':
		return "Слишком большой результат"; 
		break;
	case '445':
		return "Обратная операция невозможна из-за отсутствия прямой"; 
		break;
	case '446':
		return "Необходимо выполнить Z отчет (закрытие смены)"; 
		break;
	case '447':
		return "Таймаут при печати"; 
		break;
	case '448':
		return "Не исправимая ошибка принтера"; 
		break;
	case '449':
		return "Принтер не готов к печати"; 
		break;
	case '450':
		return "Бумага близка к концу"; 
		break;
	case '451':
		return "Неверный пароль доступа к ФП. Необходимо выполнить команду, например, \"Фискальный отчет\", введя правильный пароль"; 
		break;
	case '452':
		return "ККМ уже сертифицированна"; 
		break;
	case '453':
		return "Исчерпано число фискализаций"; 
		break;
	case '454':
		return "Неверный буфер печати (для команды 70)"; 
		break;
	case '455':
		return "Неверное G-поле(для команды 73)"; 
		break;
	case '456':
		return "Неверный номер типа оплаты"; 
		break;
	case '457':
		return "Таймаут приема"; 
		break;
	case '458':
		return "Ошибка приема"; 
		break;
	case '459':
		return "Неверное состояние ККМ"; 
		break;
	case '460':
		return "Слишком много операций в документе. Необходима команда \"Аннулировать\""; 
		break;
	case '461':
		return "Необходима печать буфера контрольной ленты"; 
		break;
	case '462':
		return "Неверный номер вида платежа"; 
		break;
	case '463':
		return "Неверное состояние принтера"; 
		break;
	case '464':
		return "Неверное дата/время. Невозможно установить переданные дату/время"; 
		break;
	case '465':
		return "Нет места для добавления отдела/составляющей (суммарное их число > 400)"; 
		break;
	case '466':
		return "Индекс отдела/составляющей уже существует"; 
		break;
	case '467':
		return "Невозможно удалить отдел - есть составляющие"; 
		break;
	case '468':
		return "Индекс отдела/составляющей не обнаружен"; 
		break;
	case '469':
		return "Фискальная память неисправна"; 
		break;
	case '470':
		return "Необходима инициализация фискальной памяти"; 
		break;
	case '471':
		return "Некорректный стартовый символ на приеме"; 
		break;
	case '472':
		return "Неопознанный ответ от ЭКЛЗ"; 
		break;
	case '473':
		return "Неизвестная команда ЭКЛЗ(01 из ЭКЛЗ)"; 
		break;
	case '474':
		return "Таймаут приема от ЭКЛЗ"; 
		break;
	case '475':
		return "Таймаут передачи в ЭКЛЗ"; 
		break;
	case '476':
		return "Неверная контрольная сумма ответа ЭКЛЗ"; 
		break;
	case '477':
		return "Неверная контрольная сумма в команде ЭКЛЗ"; 
		break;
	case '478':
		return "Контроллер ЭКЛЗ не обнаружен"; 
		break;
	case '479':
		return "Данные в ЭКЛЗ не синхронизированы"; 
		break;
	case '480':
		return "Аварийное состояние РИК (04 из ЭКЛЗ)"; 
		break;
	case '481':
		return "Число активизаций исчерпано"; 
		break;
	case '482':
		return "Требуется распечатка СКЛ"; 
		break;
	case '483':
		return "Аварийное состояние СКЛ"; 
		break;
	case '484':
		return "Ошибка при формировании строки для печати"; 
		break;
	case '485':
		return "Ошибка в фискальных данных, аппарат блокирован"; 
		break;
	case '486':
		return "Превышена длина поля команды"; 
		break;
	case '487':
		return "Ошибка чтения таймера"; 
		break;
	case '489':
		return "Операция прервана пользователем"; 
		break;
	case '490':
		return "Запрещенная команда ПУ"; 
		break;
	case '491':
		return "Ошибка установки таймера"; 
		break;
	case '492':
		return "Неверный пароль налогового инспектора"; 
		break;
	case '493':
		return "Неверный пароль на связь"; 
		break;
	case '494':
		return "Ошибка чтения фискальной памяти"; 
		break;
	case '495':
		return "Переполнеие или отрицательный результат счетчика"; 
		break;
	case '496':
		return "Не используется"; 
		break;
	case '497':
		return "Оформление документа прервано по окончанию времени ожидания готовности принтера"; 
		break;
	case '498':
		return "Буфер ответа пуст"; 
		break;
	case '499':
		return "Услуга не введена"; 
		break;
	case '500':
		return "Дублирование обязательных реквизитов документа"; 
		break;
	case '501':
		return "Ошибка в данных энергозависимой памяти. Аппарат блокирован"; 
		break;
	case '502':
		return "Невозможно выполнить инициализацию ФП. ФП уже инициализирована"; 
		break;
	case '503':
		return "Вывод прерван по окончании времени ожидания готовности дисплея"; 
		break;
	case '504':
		return "Ошибка записи FLASH памяти"; 
		break;
	case '505':
		return "Переполнение счетчиков ЭКЛЗ"; 
		break;
	case '506':
		return "Авария криптографического процессора в ЭКЛЗ"; 
		break;
	case '507':
		return "Сбой криптопроцессора ЭКЛЗ"; 
		break;
	case '508':
		return "Ошибка протокола обмена ЭКЛЗ"; 
		break;
	case '509':
		return "Переполнение приемного буфера ЭКЛЗ"; 
		break;
	case '510':
		return "Неверная контрольная сумма ЭКЛЗ"; 
		break;
	case '511':
		return "Превышено количество секций в документе(16 секций - ограничение ЭКЛЗ)"; 
		break;
	case '512':
		return "Архив ЭКЛЗ закрыт или переполнение архива"; 
		break;
	case '513':
		return "Ошибка. Данные ФП и ЭКЛЗ различаются"; 
		break;
	case '514':
		return "Переполнение счетчика количества в чеке, при сложении"; 
		break;
	case '515':
		return "Переполнение счетчика количества в чеке, при вычитании"; 
		break;
	case '516':
		return "Переполнение счетчика суммы аннулирований в чеке"; 
		break;
	case '517':
		return "Переполнение сменного счетчика суммы аннулирований"; 
		break;
	case '518':
		return "Переполнение сменного счетчика суммы продаж"; 
		break;
	case '519':
		return "Переполнение сменного счетчика суммы наличных"; 
		break;
	case '520':
		return "Переполнение сменного счетчика суммы оплаты в кредит"; 
		break;
	case '521':
		return "Переполнение сменного счетчика суммы оплаты картой"; 
		break;
	case '522':
		return "Переполнение сменного счетчика суммы наличных при вычитании"; 
		break;
	case '523':
		return "Переполнение сменного счетчика суммы возвратов при оплате в кредит"; 
		break;
	case '524':
		return "Переполнение счетчика итоговой суммы в чеке при добавлении"; 
		break;
	case '525':
		return "Переполнение счетчика итоговой суммы в чеке при вычитании"; 
		break;
	case '526':
		return "Переполнение счетчика стоимости в чеке, при умножении количества на стоимость"; 
		break;
	case '527':
		return "Переполнение счетчика итоговой суммы в чеке при вычислении скидки"; 
		break;
	case '528':
		return "Переполнение счетчика итоговой суммы по секции в чеке при вычислении скидки"; 
		break;
	case '529':
		return "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении скидки"; 
		break;
	case '530':
		return "Переполнение счетчика скидок в чеке"; 
		break;
	case '531':
		return "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении скидки"; 
		break;
	case '532':
		return "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении скидки"; 
		break;
	case '533':
		return "Переполнение счетчика итоговой суммы в чеке при вычислении надбавки"; 
		break;
	case '534':
		return "Переполнение счетчика итоговой суммы по секции в чеке при вычислении надбавки"; 
		break;
	case '535':
		return "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении надбавки"; 
		break;
	case '536':
		return "Переполнение счетчика надбавок в чеке"; 
		break;
	case '537':
		return "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении надбавки"; 
		break;
	case '538':
		return "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении надбавки"; 
		break;
	case '539':
		return "Переполнение счетчика итоговой суммы по секции в чеке"; 
		break;
	case '540':
		return "Переполнение счетчика итоговой суммы учета тары в чеке"; 
		break;
	case '541':
		return "Переполнение счетчика итоговой суммы налоговой группы в чеке"; 
		break;
	case '542':
		return "Переполнение счетчика итоговой суммы безналоговой группы в чеке"; 
		break;
	case '543':
		return "Переполнение счетчика итоговой суммы в чеке при вычислении аннулирования скидки"; 
		break;
	case '544':
		return "Переполнение счетчика итоговой суммы по секции в чеке при вычислении аннулирования скидки"; 
		break;
	case '545':
		return "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении аннулирования скидки"; 
		break;
	case '546':
		return "Переполнение счетчика скидок в чеке при вычислении аннулирования скидки"; 
		break;
	case '547':
		return "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении аннулирования скидки"; 
		break;
	case '548':
		return "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении аннулирования скидки"; 
		break;
	case '549':
		return "Переполнение счетчика итоговой суммы в чеке при вычислении аннулирования надбавки"; 
		break;
	case '550':
		return "Переполнение счетчика итоговой суммы по секции в чеке при вычислении аннулирования надбавки"; 
		break;
	case '551':
		return "Переполнение счетчика итоговой суммы учета тары в чеке при вычислении аннулирования надбавки"; 
		break;
	case '552':
		return "Переполнение счетчика надбавок в чеке при вычислении аннулирования надбавки"; 
		break;
	case '553':
		return "Переполнение счетчика итоговой суммы налоговой группы в чеке при вычислении аннулирования надбавки"; 
		break;
	case '554':
		return "Переполнение счетчика итоговой суммы безналоговой группы в чеке при вычислении аннулирования надбавки"; 
		break;
	case '555':
		return "Переполнение счетчика итоговой суммы оплаты при комбинированной оплате"; 
		break;
	case '556':
		return "Блокировка выполнения команды. Расхождение текущей даты и даты последней записи в ФП больше запрограммированного значения. Для снятия блокировки  необходимо выполнить команду программирования даты"; 
		break;
	case '557':
		return "Блокировка выполнения команды. Последний документ не напечатан. После восстановления работоспособности принтера (зарядить бумагу, опустить печатающую головку, закрыть крышку) принтер автоматически распечатывает документ и снимает блокировку"; 
		break;
	case '558':
		return "Блокировка выполнения команды. Выполняется тестирование оборудования ККМ"; 
		break;
	case '559':
		return "Итоговая сумма чека возврата не равна итоговой возвращаемой сумме при комбинированном возврате"; 
		break;
	default:
		break;
}		

if (num ==-10){
		return "Неизвестная ошибка";}
if (num ==-1){
	return "ФР е отвечает";}
if (num ==-2){
	return "Неврный протокол";}
if (num ==-3){
	return "Приработе без ФР/ в обучающем режиме не смогли считать/записать значение регистра";}
if (num ==-4){
	return "Невзможно дописать в файл значение недостающего регистра";}
if (num ==-5){
	return "Истекло время получения ответа от ФР!";}
}
