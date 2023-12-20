void
__main(void)
{
	if (initialized.10 == 0) {
		initialized.10 = 1;
		__do_global_ctors();
		return;
	}
	
	return;
}

/*
 * Function:
 * main()
 * 
 * Description:
 * Game entry point.
 * 
 * Arguments:
 * None.
 * 
 * Return value:
 * None.
 */
void
main(void)
{
	__main();
	no_default_font = 0;
	superbuffer_base = NuMemAllocFn(0x1200000, 0x633310, 0x567);
	superbuffer_end = superbuffer_base + 0x480000;
	
	if (superbuffer_base == (int *)0x0) {
	}
	
	DefaultGame();
	ResetGame();
	NuPs2Init();
}
