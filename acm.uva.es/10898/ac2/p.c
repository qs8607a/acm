int main()
{
__asm__ __volatile__(
"	jmp	_main2\n"
".lcomm _testid,16\n"
"_find:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$80, %esp\n"
"	movl	8(%ebp), %ecx\n"
"	movl	(%ecx), %edx\n"
"	movl	%edx, -76(%ebp)\n"
"	movl	$1, %ebx\n"
"	movl	_n, %esi\n"
"	movl	%esi, %ecx\n"
"	cmpl	%esi, %ebx\n"
"	jge	L28\n"
"	.p2align 4,,15\n"
"L6:\n"
"	movl	-76(%ebp), %eax\n"
"	leal	(%eax,%eax,4), %edx\n"
"	movl	8(%ebp), %edi\n"
"	movl	(%edi,%ebx,4), %eax\n"
"	leal	(%eax,%edx,2), %edi\n"
"	movl	%edi, -76(%ebp)\n"
"	incl	%ebx\n"
"	cmpl	%ecx, %ebx\n"
"	jl	L6\n"
"L28:\n"
"	movl	_testid, %eax\n"
"	movl	-76(%ebp), %edx\n"
"	cmpl	%eax, _got(,%edx,4)\n"
"	je	L35\n"
"	movl	-76(%ebp), %edx\n"
"	movl	%eax, _got(,%edx,4)\n"
"	testl	%edx, %edx\n"
"	jne	L8\n"
"	xorl	%ebx, %ebx\n"
"	movl	%ebx, _val\n"
"	xorl	%eax, %eax\n"
"L1:\n"
"	addl	$80, %esp\n"
"	popl	%ebx\n"
"	popl	%esi\n"
"	popl	%edi\n"
"	popl	%ebp\n"
"	ret\n"
"L8:\n"
"	movl	-76(%ebp), %edi\n"
"	xorl	%eax, %eax\n"
"	movl	%eax, _val(,%edi,4)\n"
"	xorl	%ebx, %ebx\n"
"	cmpl	%ecx, %ebx\n"
"	jge	L30\n"
"L13:\n"
"	movl	8(%ebp), %eax\n"
"	movl	(%eax,%ebx,4), %edi\n"
"	movl	_cost(,%ebx,4), %eax\n"
"	imull	%eax, %edi\n"
"	movl	-76(%ebp), %edx\n"
"	addl	%edi, _val(,%edx,4)\n"
"	incl	%ebx\n"
"	cmpl	%ecx, %ebx\n"
"	jl	L13\n"
"L30:\n"
"	xorl	%ebx, %ebx\n"
"	movl	_ntup, %ecx\n"
"	movl	%ecx, -60(%ebp)\n"
"	movl	$_tup+12, -64(%ebp)\n"
"	cmpl	%ecx, %ebx\n"
"	jge	L32\n"
"L26:\n"
"	xorl	%ecx, %ecx\n"
"	.p2align 4,,15\n"
"L18:\n"
"	cmpl	%esi, %ecx\n"
"	jge	L21\n"
"	leal	(%ecx,%ebx,8), %edx\n"
"	movl	8(%ebp), %edi\n"
"	movl	(%edi,%ecx,4), %eax\n"
"	movl	_tup(,%edx,4), %edi\n"
"	subl	%edi, %eax\n"
"	movl	%eax, -56(%ebp,%ecx,4)\n"
"	testl	%eax, %eax\n"
"	js	L19\n"
"	incl	%ecx\n"
"	jmp	L18\n"
"L19:\n"
"	incl	%ebx\n"
"	addl	$32, -64(%ebp)\n"
"	cmpl	-60(%ebp), %ebx\n"
"	jge	L32\n"
"	movl	_n, %esi\n"
"	jmp	L26\n"
"L32:\n"
"	movl	-76(%ebp), %edx\n"
"L35:\n"
"	movl	_val(,%edx,4), %eax\n"
"	jmp	L1\n"
"L21:\n"
"	leal	-56(%ebp), %edi\n"
"	movl	%edi, (%esp)\n"
"	call	_find\n"
"	movl	%eax, %ecx\n"
"	movl	-64(%ebp), %edx\n"
"	movl	16(%edx), %esi\n"
"	addl	%esi, %ecx\n"
"	movl	-76(%ebp), %edx\n"
"	cmpl	_val(,%edx,4), %ecx\n"
"	jge	L33\n"
"	movl	%ecx, _val(,%edx,4)\n"
"	movl	_ntup, %eax\n"
"	movl	%eax, -60(%ebp)\n"
"	jmp	L19\n"
"L33:\n"
"	movl	_ntup, %ecx\n"
"	movl	%ecx, -60(%ebp)\n"
"	jmp	L19\n"
"LC0:\n"
"	.ascii \"%d\\12\\0\"\n"
"_main2:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$44, %esp\n"
"	movl	$48, -16(%ebp)\n"
"L41:\n"
"	movl	-16(%ebp), %ecx\n"
"	movl	$1, %eax\n"
"	movl	%eax, _isdig.3(,%ecx,4)\n"
"	incl	%ecx\n"
"	movl	%ecx, -16(%ebp)\n"
"	cmpl	$57, %ecx\n"
"	jle	L41\n"
"	movl	$131072, %ecx\n"
"	movl	%ecx, 8(%esp)\n"
"	movl	$_inbuf.0, %edi\n"
"	movl	%edi, 4(%esp)\n"
"	movl	$0, (%esp)\n"
"	call	read\n"
"	movl	%eax, -16(%ebp)\n"
"	movb	$32, _inbuf.0(%eax)\n"
"	incl	-16(%ebp)\n"
"	movl	-16(%ebp), %edx\n"
"	movb	$48, _inbuf.0(%edx)\n"
"	movb	$32, _inbuf.0+1(%edx)\n"
"	movzbl	_inbuf.0, %ebx\n"
"L192:\n"
"	movsbl	%bl,%esi\n"
"	movl	_isdig.3(,%esi,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L149\n"
"L48:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L48\n"
"L149:\n"
"	movsbl	%bl,%edx\n"
"	incl	%edi\n"
"	subl	$48, %edx\n"
"	movl	%edx, -28(%ebp)\n"
"	movl	%edx, _n\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %esi\n"
"	testl	%esi, %esi\n"
"	je	L189\n"
"	movl	%eax, %edx\n"
"L53:\n"
"	movl	-28(%ebp), %eax\n"
"	leal	(%eax,%eax,4), %esi\n"
"	incl	%edi\n"
"	leal	-48(%edx,%esi,2), %ebx\n"
"	movl	%ebx, -28(%ebp)\n"
"	movl	%ebx, _n\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%esi\n"
"	movl	%esi, %edx\n"
"	movl	_isdig.3(,%esi,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L53\n"
"L151:\n"
"	movl	-28(%ebp), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L43\n"
"	movl	$0, -16(%ebp)\n"
"	movl	-28(%ebp), %esi\n"
"	cmpl	%esi, -16(%ebp)\n"
"	jge	L153\n"
"L68:\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L155\n"
"	.p2align 4,,15\n"
"L62:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%edx\n"
"	movl	_isdig.3(,%edx,4), %esi\n"
"	testl	%esi, %esi\n"
"	je	L62\n"
"L155:\n"
"	movsbl	%bl,%edx\n"
"	leal	-48(%edx), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L157\n"
"	movl	%eax, %edx\n"
"	.p2align 4,,15\n"
"L67:\n"
"	leal	(%esi,%esi,4), %ebx\n"
"	leal	-48(%edx,%ebx,2), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	%ecx, %edx\n"
"	movl	_isdig.3(,%ecx,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L67\n"
"L157:\n"
"	movl	-16(%ebp), %edx\n"
"	movl	%esi, _cost(,%edx,4)\n"
"	incl	%edx\n"
"	movl	%edx, -16(%ebp)\n"
"	movl	-28(%ebp), %esi\n"
"	cmpl	%esi, %edx\n"
"	jl	L68\n"
"L153:\n"
"	movsbl	%bl,%esi\n"
"	movl	_isdig.3(,%esi,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L159\n"
"L72:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L72\n"
"L159:\n"
"	movsbl	%bl,%edx\n"
"	leal	-48(%edx), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L161\n"
"	movl	%eax, %edx\n"
"L77:\n"
"	leal	(%esi,%esi,4), %ebx\n"
"	leal	-48(%edx,%ebx,2), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	%ecx, %edx\n"
"	movl	_isdig.3(,%ecx,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L77\n"
"L161:\n"
"	movl	%esi, _ntup\n"
"	movl	$0, -16(%ebp)\n"
"	cmpl	%esi, -16(%ebp)\n"
"	jge	L163\n"
"	movl	%esi, -24(%ebp)\n"
"	movl	$0, -32(%ebp)\n"
"L118:\n"
"	xorl	%esi, %esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jge	L165\n"
"	.p2align 4,,15\n"
"L95:\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L167\n"
"	.p2align 4,,15\n"
"L89:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L89\n"
"L167:\n"
"	movsbl	%bl,%edx\n"
"	leal	-48(%edx), %ecx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L169\n"
"	movl	%eax, %edx\n"
"	.p2align 4,,15\n"
"L94:\n"
"	leal	(%ecx,%ecx,4), %ebx\n"
"	leal	-48(%edx,%ebx,2), %ecx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	%eax, %edx\n"
"	movl	_isdig.3(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L94\n"
"L169:\n"
"	movl	-32(%ebp), %edx\n"
"	addl	%esi, %edx\n"
"	movl	%ecx, _tup(,%edx,4)\n"
"	incl	%esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jl	L95\n"
"L165:\n"
"	movsbl	%bl,%esi\n"
"	movl	_isdig.3(,%esi,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L171\n"
"	.p2align 4,,15\n"
"L99:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L99\n"
"L171:\n"
"	movsbl	%bl,%edx\n"
"	leal	-48(%edx), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L173\n"
"	movl	%eax, %edx\n"
"	.p2align 4,,15\n"
"L104:\n"
"	leal	(%esi,%esi,4), %ebx\n"
"	leal	-48(%edx,%ebx,2), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	%ecx, %edx\n"
"	movl	_isdig.3(,%ecx,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L104\n"
"L173:\n"
"	movl	-32(%ebp), %eax\n"
"	movl	%esi, _tup+28(,%eax,4)\n"
"	xorl	%esi, %esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jge	L106\n"
"	movl	%eax, %edx\n"
"	movl	_tup(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L106\n"
"L110:\n"
"	incl	%esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jge	L106\n"
"	leal	(%esi,%edx), %eax\n"
"	movl	_tup(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L110\n"
"L106:\n"
"	cmpl	-28(%ebp), %esi\n"
"	je	L193\n"
"	xorl	%ecx, %ecx\n"
"	xorl	%esi, %esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jge	L176\n"
"	movl	-32(%ebp), %edx\n"
"	movl	%edx, -20(%ebp)\n"
"L116:\n"
"	movl	-20(%ebp), %edx\n"
"	addl	%esi, %edx\n"
"	movl	_cost(,%esi,4), %eax\n"
"	imull	_tup(,%edx,4), %eax\n"
"	addl	%eax, %ecx\n"
"	incl	%esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jl	L116\n"
"L176:\n"
"	movl	-32(%ebp), %esi\n"
"	cmpl	_tup+28(,%esi,4), %ecx\n"
"	jg	L117\n"
"L193:\n"
"	decl	-24(%ebp)\n"
"	movl	-24(%ebp), %eax\n"
"	movl	%eax, _ntup\n"
"L78:\n"
"	movl	-24(%ebp), %ecx\n"
"	cmpl	%ecx, -16(%ebp)\n"
"	jl	L118\n"
"L163:\n"
"	movsbl	%bl,%esi\n"
"	movl	_isdig.3(,%esi,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L178\n"
"L122:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L122\n"
"L178:\n"
"	movsbl	%bl,%edx\n"
"	incl	%edi\n"
"	leal	-48(%edx), %ecx\n"
"	movl	%ecx, _t.2\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %esi\n"
"	testl	%esi, %esi\n"
"	je	L190\n"
"	movl	%eax, %edx\n"
"L127:\n"
"	leal	(%ecx,%ecx,4), %ebx\n"
"	incl	%edi\n"
"	leal	-48(%edx,%ebx,2), %ecx\n"
"	movl	%ecx, _t.2\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%esi\n"
"	movl	%esi, %edx\n"
"	movl	_isdig.3(,%esi,4), %esi\n"
"	testl	%esi, %esi\n"
"	jne	L127\n"
"L180:\n"
"	movl	%ecx, %edx\n"
"	decl	%ecx\n"
"	movl	%ecx, _t.2\n"
"	testl	%edx, %edx\n"
"	jle	L192\n"
"L145:\n"
"	movl	$0, -16(%ebp)\n"
"	movl	-28(%ebp), %ecx\n"
"	cmpl	%ecx, -16(%ebp)\n"
"	jge	L184\n"
"	movzbl	(%edi), %ebx\n"
"	.p2align 4,,15\n"
"L144:\n"
"	movsbl	%bl,%esi\n"
"	movl	_isdig.3(,%esi,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L186\n"
"	.p2align 4,,15\n"
"L138:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	_isdig.3(,%ecx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L138\n"
"L186:\n"
"	movsbl	%bl,%edx\n"
"	leal	-48(%edx), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%eax\n"
"	movl	_isdig.3(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L188\n"
"	movl	%eax, %edx\n"
"	.p2align 4,,15\n"
"L143:\n"
"	leal	(%esi,%esi,4), %ebx\n"
"	leal	-48(%edx,%ebx,2), %esi\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ebx\n"
"	movsbl	%bl,%ecx\n"
"	movl	%ecx, %edx\n"
"	movl	_isdig.3(,%ecx,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	jne	L143\n"
"L188:\n"
"	movl	-16(%ebp), %eax\n"
"	movl	%esi, _a.1(,%eax,4)\n"
"	incl	%eax\n"
"	movl	%eax, -16(%ebp)\n"
"	movl	-28(%ebp), %esi\n"
"	cmpl	%esi, %eax\n"
"	jl	L144\n"
"L184:\n"
"	incl	_testid\n"
"	movl	$_a.1, (%esp)\n"
"	call	_find\n"
"	movl	%eax, 4(%esp)\n"
"	movl	$LC0, (%esp)\n"
"	call	printf\n"
"	movl	_t.2, %ecx\n"
"	leal	-1(%ecx), %edx\n"
"	movl	%edx, _t.2\n"
"	testl	%ecx, %ecx\n"
"	jle	L194\n"
"	movl	_n, %eax\n"
"	movl	%eax, -28(%ebp)\n"
"	jmp	L145\n"
"L194:\n"
"	movzbl	(%edi), %ebx\n"
"	jmp	L192\n"
"L190:\n"
"	movl	_t.2, %ecx\n"
"	jmp	L180\n"
"L117:\n"
"	incl	-16(%ebp)\n"
"	addl	$8, -32(%ebp)\n"
"	jmp	L78\n"
"L189:\n"
"	movl	_n, %edx\n"
"	movl	%edx, -28(%ebp)\n"
"	jmp	L151\n"
"L43:\n"
"	movl	$0, (%esp)\n"
"	call	exit\n"
".lcomm _a.1,32\n"
".lcomm _t.2,16\n"
".lcomm _n,16\n"
".lcomm _ntup,16\n"
".lcomm _cost,128\n"
".lcomm _tup,1024\n"
".lcomm _isdig.3,1024\n"
".lcomm _inbuf.0,131072\n"
".lcomm _val,4194304\n"
".lcomm _got,4194304\n"
);
}
