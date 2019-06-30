select rs.Score, ts.Rank
from
(select Score from Scores order by Score desc) rs,
(select
t.Score as 'Score', @rownum := @rownum + 1 as 'Rank'
from
(select distinct Score from Scores order by Score desc) t,
(SELECT @rownum := 0) r) ts
where rs.Score = ts.Score;
