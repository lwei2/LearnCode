select w.Id from Weather as w inner join Weather as h on to_days(w.RecordDate) = to_days(h.RecordDate) + 1 and w.Temperature > h.Temperature;
