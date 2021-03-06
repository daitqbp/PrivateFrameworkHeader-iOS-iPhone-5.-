/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, ASToDoRecurrence, NSDate, NSNumber, NSTimeZone;

@interface ASToDo : ASChangedCollectionLeaf <DADataElement> {
    void *_calRecord;
    NSString *_body;
    NSNumber *_bodyTruncated;
    NSArray *_categories;
    NSNumber *_complete;
    NSDate *_dateCompleted;
    NSDate *_dueDate;
    NSDate *_utcDueDate;
    NSNumber *_importance;
    NSNumber *_reminderIsSet;
    NSDate *_reminderDateTime;
    NSNumber *_sensitivity;
    NSDate *_startTime;
    NSDate *_utcStartTime;
    NSString *_subject;
    ASToDoRecurrence *_recurrence;
}

@property(retain) NSString * body;
@property(retain) NSNumber * bodyTruncated;
@property(retain) NSArray * categories;
@property(retain) NSNumber * complete;
@property(retain) NSDate * dateCompleted;
@property(retain) NSDate * dueDate;
@property(setter=setUTCDueDate:,retain) NSDate * utcDueDate;
@property(retain) NSNumber * importance;
@property(retain) NSNumber * reminderIsSet;
@property(retain) NSDate * reminderDateTime;
@property(retain) NSNumber * sensitivity;
@property(retain) NSDate * startTime;
@property(setter=setUTCStartTime:,retain) NSDate * utcStartTime;
@property(retain) NSString * subject;
@property(retain) ASToDoRecurrence * recurrence;
@property(readonly) NSTimeZone * dueDateTimeZone;

+ (id)toDoWithCalTask:(void*)arg1 serverID:(id)arg2 account:(id)arg3;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (void)setComplete:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)setCategories:(id)arg1;
- (id)categories;
- (void)setDueDate:(id)arg1;
- (id)dueDateTimeZone;
- (id)dueDate;
- (id)complete;
- (void)setBody:(id)arg1;
- (id)startTime;
- (id)body;
- (void)setStartTime:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setBodyTruncated:(id)arg1;
- (id)bodyTruncated;
- (void)loadClientIDs;
- (void*)calTask;
- (int)dataclass;
- (BOOL)deleteFromContainer:(void*)arg1;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void*)arg1;
- (BOOL)saveAfterMapWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
- (BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
- (BOOL)deleteFromCalendar;
- (BOOL)saveServerIDToCalendar;
- (BOOL)loadCalRecordForAccount:(id)arg1;
- (BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
- (id)sensitivity;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)importance;
- (void)postProcessApplicationData;
- (id)recurrence;
- (id)reminderIsSet;
- (id)reminderDateTime;
- (id)dateCompleted;
- (id)utcDueDate;
- (id)_bestGuessTimeZoneWithLocalDate:(id)arg1 utcDate:(id)arg2;
- (id)utcStartTime;
- (id)initWithCalTask:(void*)arg1 serverID:(id)arg2 account:(id)arg3;
- (void)_loadAttributesFromCalTask:(void*)arg1 forAccount:(id)arg2;
- (void)setCalTask:(void*)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setImportance:(id)arg1;
- (void)setSensitivity:(id)arg1;
- (void)setDateCompleted:(id)arg1;
- (void)setUTCDueDate:(id)arg1;
- (void)setUTCStartTime:(id)arg1;
- (void)setReminderIsSet:(id)arg1;
- (void)setReminderDateTime:(id)arg1;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
