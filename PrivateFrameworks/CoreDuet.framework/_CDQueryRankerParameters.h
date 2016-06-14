/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDQueryRankerParameters : NSObject {
    id /* block */  _aggregation;
    double  _diffWeekPeriodWeight;
    double  _durationWeight;
    double  _engagementWeight;
    double  _eventWindow;
    unsigned long long  _minimumTermFrequency;
    double  _offset;
    NSDate * _referenceDate;
    double  _renderWeight;
    unsigned long long  _resultLimit;
    double  _sameWeekPeriodWeight;
    double  _scoreThreshold;
    double  _timeHalfLife;
    double  _timeOfDayHalfLife;
    double  _timeOfDayWeight;
    double  _timeOfWeekHalfLife;
    double  _timeOfWeekWeight;
    double  _timeWeight;
}

@property (copy) id /* block */ aggregation;
@property double diffWeekPeriodWeight;
@property double durationWeight;
@property double engagementWeight;
@property double eventWindow;
@property unsigned long long minimumTermFrequency;
@property double offset;
@property (retain) NSDate *referenceDate;
@property double renderWeight;
@property unsigned long long resultLimit;
@property double sameWeekPeriodWeight;
@property double scoreThreshold;
@property double timeHalfLife;
@property double timeOfDayHalfLife;
@property double timeOfDayWeight;
@property double timeOfWeekHalfLife;
@property double timeOfWeekWeight;
@property double timeWeight;

+ (id)defaultParameters;
+ (id)parametersForModel:(unsigned long long)arg1;
+ (id)parametersFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)aggregation;
- (double)diffWeekPeriodWeight;
- (double)durationWeight;
- (double)engagementWeight;
- (double)eventWindow;
- (unsigned long long)minimumTermFrequency;
- (double)offset;
- (id)referenceDate;
- (double)renderWeight;
- (unsigned long long)resultLimit;
- (double)sameWeekPeriodWeight;
- (double)scoreThreshold;
- (void)setAggregation:(id /* block */)arg1;
- (void)setDiffWeekPeriodWeight:(double)arg1;
- (void)setDurationWeight:(double)arg1;
- (void)setEngagementWeight:(double)arg1;
- (void)setEventWindow:(double)arg1;
- (void)setMinimumTermFrequency:(unsigned long long)arg1;
- (void)setOffset:(double)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setRenderWeight:(double)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setSameWeekPeriodWeight:(double)arg1;
- (void)setScoreThreshold:(double)arg1;
- (void)setTimeHalfLife:(double)arg1;
- (void)setTimeOfDayHalfLife:(double)arg1;
- (void)setTimeOfDayWeight:(double)arg1;
- (void)setTimeOfWeekHalfLife:(double)arg1;
- (void)setTimeOfWeekWeight:(double)arg1;
- (void)setTimeWeight:(double)arg1;
- (double)timeHalfLife;
- (double)timeOfDayHalfLife;
- (double)timeOfDayWeight;
- (double)timeOfWeekHalfLife;
- (double)timeOfWeekWeight;
- (double)timeWeight;

@end