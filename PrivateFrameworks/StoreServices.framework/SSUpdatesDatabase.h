/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatesDatabase : NSObject {
    SSSQLiteDatabase * _database;
}

@property (readonly) bool requiresMigration;

- (void)_dispatchBlockAsync:(id /* block */)arg1;
- (id)_initReadOnly:(bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)arg1;
- (void)modifyUsingTransactionBlock:(id /* block */)arg1;
- (void)readAsyncUsingSessionBlock:(id /* block */)arg1;
- (void)readUsingSessionBlock:(id /* block */)arg1;
- (bool)requiresMigration;

@end