#include <iostream>
#include <list>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::list<std::string> students = { "Бовша Альберт Рустамович 1", "Богатикова Антонина Дмитриевна 2",
        "Горохов Степан Леонидович 3", "Гусев Александр Семенович 3", "Дзугаев Ахсарбек Станиславович 3",
        "Загибалов Павел Дмитриевич 2", "Землянов Константин Александрович 1", "Игумеников Степан Владимирович 3",
        "Каламбетов Даниил Эдуардович 3", "Карданова Аида Аскеровна 4", "Кашина Оксана Алексеевна 1",
        "Киреев Кирилл Александрович 1", "Коротких Анна Алексеевна 1", "Кудряшов Дмитрий Романович 1",
        "Мамлеева Аделина Ринатовна 1", "Маслеников Денис Олегович 2", "Паршин Паша Ильич 3",
        "Петровский Дмитрий Константинович 3", "Подкользин Василий Борисович 4", "Пушкарева Екатерина Константиновна 4",
        "Сабитов Тимур Ринатович 4", "Саргсян Армен Микаелович 3", "Соколова Ульяна Александровна 2",
        "Стержантова Дарья Владимировна 2", "Толкачев Константин Александрович 2", "Цыганкова Мария Александровна 1",
        "Чумаченко Николай Владимирович 1", "Якимов Евгений Андреевич 1", "Яковенко Елизавета Игоревна 3",
        "Никифорова Екатерина Игоревна 4", "Ляпин Марат Наильевич 4", "Коночкина Маргарита Николаевна 2", "Илизаров Год Эмануилович 1" };

    

    for (std::list<std::string>::iterator it = students.begin(); it != students.end(); it++) {
        std::cout << (*it) << std::endl;
    }
}