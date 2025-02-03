int main(void)
{
  undefined uVar3;
  char cVar2;
  undefined4 local_1;
  int iVar4;
  bool bVar1;
  undefined4 uVar6;
  undefined2 show_window; 
  int unaff_ESI;
  int *piVar5;
  code *name_anything;
  uint idk_what_this_s;
  void *exception_list;
  
  local_1 = 0xfffffffe;
  name_anything = idk;
  exception_list = ExceptionList;
  idk_what_this_s = something_notimportant ^ 0x405bb0;
  ExceptionList = &exception_list;
  cVar2 = init_start(1);
  if (cVar2 == '\0') {
    handle_exceptions(7);
  }
  else {
    bVar1 = false;
    local_1 = 0;
    uVar3 = FUN_00402eb0();
    if (DAT_00407068 != 1) {
      if (DAT_00407068 == 0) {
        DAT_00407068 = 1;
                    /* get args to somewhere idk where though */
        iVar4 = call_main_table(&another_table,&DAT_00405118);
        if (iVar4 != 0) {
          ExceptionList = exception_list;
          return 0xff;
        }
        _initterm(&PTR_00405100,&DAT_00405108);
        DAT_00407068 = 2;
      }
      else {
        bVar1 = true;
      }
      ___scrt_release_startup_lock(uVar3);
      piVar5 = (int *)FUN_00403110();
      if (*piVar5 != 0) {
        cVar2 = check_entrypoint(piVar5);
        if (cVar2 != '\0') {
          (*(code *)*piVar5)(0,2,0);
        }
      }
      show_window = FUN_004032b0();
      uVar6 = FUN_00403780();
      unaff_ESI = init_all(0x400000,0,uVar6,show_window);  // The function where things happen
      cVar2 = FUN_00403300();
      if (cVar2 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        free_all(1,0);
        ExceptionList = exception_list;
        return unaff_ESI;
      }
      goto LAB_00402c9a;
    }
  }
  handle_exceptions(7);
LAB_00402c9a:
                    /* WARNING: Subroutine does not return */
  exit(unaff_ESI);
}
