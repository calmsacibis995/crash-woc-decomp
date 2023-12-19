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
}
